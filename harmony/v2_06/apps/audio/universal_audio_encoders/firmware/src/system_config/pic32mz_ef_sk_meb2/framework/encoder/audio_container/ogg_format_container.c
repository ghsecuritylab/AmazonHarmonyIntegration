/*******************************************************************************
  MPLAB Harmony Middleware Source File

  Company:
    Microchip Technology Inc.

  File Name:
    ogg_format_container.c

  Summary:
    ogg format container source file.

  Description:
    ogg format container source file.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 *******************************************************************************/
//DOM-IGNORE-END

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */
#ifndef _OGG_FORMAT_CONTAINER_C
#define _OGG_FORMAT_CONTAINER_C
/* This section lists the other files that are included in this file.
 */
#include "ogg_format_container.h"
#include <string.h>
/* TODO:  Include other files here if needed. */
#define writeint(buf, base, val) do{ buf[base+3]=((val)>>24)&0xff; \
                                     buf[base+2]=((val)>>16)&0xff; \
                                     buf[base+1]=((val)>>8)&0xff; \
                                     buf[base]=(val)&0xff; \
                                 }while(0)

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

 ogg_stream_state os_en;
 static OGG_CONFIG_S _ogg_container_config;
 
 static uint8_t _g_packet_count=0; // global packet counter

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

inline static void comment_pad(char *comments, int* length, int amount)
{
  if(amount>0){
    int i;
    int newlen;
    /*Make sure there is at least amount worth of padding free, and
       round up to the maximum that fits in the current ogg segments.*/
    newlen=(*length+amount+255)/255*255-1;

    for(i=*length;i<newlen;i++)comments[i]=0;
    *length=newlen;
  }
}

void ogg_container_config_set_pageout_callback(OGG_CONTAINER_PAGEOUT_CALLBACK pageout_cb)
{
    _ogg_container_config.pageout_callback = pageout_cb;
}

bool ogg_container_stream_init(int serialno, 
        OGG_CONTAINER_PAGEOUT_CALLBACK pageout_cb,
        uint8_t num_packets_to_one_ogg_page)
{
    if(ogg_stream_init(&os_en,serialno)==0)
    {
        _ogg_container_config.NUM_PACKETS_TO_ONE_PAGE = num_packets_to_one_ogg_page;
        _ogg_container_config.pageout_callback = pageout_cb;
        return true;
    }
    return false;
}

void ogg_container_stream_destroy()
{
    ogg_stream_destroy(&os_en);
}

int32_t ogg_opus_encapsulate(void *encoded, 
        int size, 
        int framecount, 
        int framesize, 
        int inputSampleRate,
        bool lastpacket)
{
    ogg_packet op;
    ogg_page og;
    op.packet=(unsigned char*)encoded;
    op.bytes=size;
    op.b_o_s=0; 
    op.e_o_s = lastpacket?1:0;
    

    op.granulepos =framecount*framesize*(48000/inputSampleRate);

    if(ogg_stream_packetin(&os_en, &op)==0)
    {
        _g_packet_count++;
        // successful
        if(op.e_o_s == 1)
        {
            while(ogg_stream_flush(&os_en, &og)!=0)
            {
                _ogg_container_config.pageout_callback(&og);
            }
            return -1;
        }
    }else
    {
        // error
        Nop();
        // one packet not feed in ogg library maybe is acceptable
    }
    
    
    if(_g_packet_count == _ogg_container_config.NUM_PACKETS_TO_ONE_PAGE)
    {
        // form a page
        
        while(ogg_stream_pageout(&os_en,&og)==!0)
        {
            _ogg_container_config.pageout_callback(&og);
        }
        _g_packet_count = 0; 
    }
    return 0;
}

int32_t ogg_fill_header(
        int channel,
        int inputSampleRate,
        void *pheader, 
        uint32_t size)
{
    // Ogg-Opus Identification header
    ogg_packet __attribute__ ((unused)) op;
    ogg_page __attribute__ ((unused)) og;
    
    int32_t ret = -1;
    uint8_t *buf = (uint8_t*)pheader;
	// get opus id header
	// create a basic opus id header
	uint8_t opusIdHeader[19]; 
	ret = ogg_opus_get_id_header(
			opusIdHeader,  // Opus Ogg Identication Header Buffer
			channel, // Channel of this encoded Opus-Ogg file
			inputSampleRate, 
			480,
			0,
			0);
	// fill in ogg page
	op.packet=opusIdHeader;
	op.bytes=ret; // must be 19
	op.b_o_s = 1; 
	op.e_o_s = 0;
	op.granulepos=0;
	op.packetno=0;
	if(ogg_stream_packetin(&os_en, &op)==0)
	{
		// successful
		if(ogg_stream_flush(&os_en, &og)!=0)
		{
			memcpy(buf, (const void*)og.header, og.header_len);
			memcpy(buf+og.header_len, (const void*)og.body, og.body_len);
			ret = og.header_len+og.body_len;
		}else
		{
			return -1;
		}
	}else
	{
		return -1;
	}
	char comments[800];
	memcpy(comments, "OpusTags", 8);
	char vendor_string[] = "Harmony Opus Encoder v1.01";
	writeint(comments, 8, sizeof(vendor_string));
	memcpy(comments+12, vendor_string, sizeof(vendor_string));
		
	op.packet= (unsigned char*)comments;
	op.bytes=8+4+sizeof(vendor_string);
	op.b_o_s=0;
	op.e_o_s=0;
	op.granulepos=0;
	op.packetno=1;
	comment_pad(comments, (int*)&op.bytes, 512);

	if(ogg_stream_packetin(&os_en, &op)==0)
	{
		// successful
		while(ogg_stream_flush(&os_en, &og)!=0)
		{
			memcpy(buf+ret, og.header, og.header_len);
			memcpy(buf+ret+og.header_len, og.body, og.body_len);
			ret += og.header_len+og.body_len;
		}
	}else
	{
		return -1;
	}

    return ret;
}

/* *****************************************************************************
 End of File
 */
#endif
