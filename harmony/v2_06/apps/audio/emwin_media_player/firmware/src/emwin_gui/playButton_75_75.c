/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.34c.                          *
*        Compiled Jun 24 2016, 09:39:51                              *
*                                                                    *
*        (c) 1998 - 2016 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: playButton_75_75                                      *
* Dimensions:  75 * 75                                               *
* NumColors:   256                                                   *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmplayButton_75_75;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _ColorsplayButton_75_75[] = {
  0x000000, 0xFEFEFE, 0xD4E849, 0x888888,
  0xA7A7A7, 0xB7B7B7, 0xC7C7C7, 0x979798,
  0x737273, 0x858489, 0x7B7A7B, 0x6B6B6C,
  0xDBDBDB, 0x636365, 0xD1E54A, 0xD3D3D3,
  0xE3E3E3, 0xEAEAEB, 0xDAF044, 0xD4E945,
  0xF3F3F3, 0xCDE436, 0x91947E, 0xD2E83A,
  0x7D7B86, 0x656469, 0xC3D353, 0xCADD4D,
  0x1B1B1B, 0x75757A, 0xD1E545, 0x828282,
  0xCEE14C, 0x6C6C71, 0x323232, 0x4A4A4A,
  0xC9DB50, 0x3A3A3A, 0xBDCB5B, 0xB7C364,
  0xC3D44C, 0xDBD9E5, 0x949586, 0x434343,
  0xB5C353, 0xCAC9D5, 0x5B5B5B, 0xCDE245,
  0xD8EE45, 0x535353, 0xBCCC53, 0xAAA9B4,
  0xBBB9C6, 0x717363, 0xAEB963, 0xBBCC4A,
  0xC2D445, 0xF4F3FB, 0x0A0A0A, 0x131313,
  0x232323, 0xAAB562, 0xCADD45, 0xC6D851,
  0x807E8B, 0xECEBF0, 0x292929, 0x605F65,
  0x78777C, 0x82837C, 0x9BA364, 0xB5C25B,
  0x8A8A85, 0x6A6B65, 0xA2AC5B, 0xA6B15B,
  0x8B9163, 0x828372, 0x9CA374, 0xA3AB6A,
  0xA9B26A, 0xC6D84C, 0x8C8B92, 0xA3A785,
  0x5E5E66, 0x9AA35A, 0xA9B45D, 0xB1BD5A,
  0x8A8C7A, 0x999D7A, 0xA4AD63, 0xB2BD63,
  0xB2BC6D, 0xD4E655, 0xD7E865, 0xD5D5D9,
  0xE4E3E9, 0x68676D, 0x7E8071, 0xADBB4C,
  0xB0BD55, 0x808563, 0x868B62, 0x949B62,
  0x959B6C, 0x9CA36B, 0xA4AA73, 0xB4C34C,
  0xB9C65B, 0xA2A39B, 0xD6D9C9, 0xF6F8E9,
  0xF0EFF4, 0x7A7E64, 0x72726B, 0x7A7B73,
  0x939B5C, 0x9FA85C, 0xACB955, 0x80846A,
  0x8D9073, 0x969A7C, 0xB1BB75, 0xC6D945,
  0xC2D258, 0xCDDE5B, 0xDBEA76, 0x8E9081,
  0x9EA09B, 0x9B9AA3, 0xA09FA2, 0xBABCAB,
  0xC1C2BC, 0xD1D4BB, 0xECF4B6, 0xDADBD3,
  0xF4F8D5, 0xE4E2F4, 0x676868, 0x6F7163,
  0x7A7D6B, 0x706F73, 0x7E8263, 0x9EA954,
  0xA4B051, 0xADB95C, 0x868974, 0x878979,
  0x949875, 0x989D73, 0xAFB870, 0xB5BD79,
  0xB8C655, 0xC0CE5B, 0xC7D56C, 0x7A7692,
  0xA09F9F, 0x9EA18C, 0xABB184, 0xB4BB88,
  0xB4B79B, 0xBAC381, 0xBCC48D, 0xBEC0B9,
  0xC3C99A, 0xDBE78B, 0xE5F097, 0xCACDB1,
  0xE9F2A7, 0xCFD0CC, 0xD2D4C7, 0xDADCCC,
  0xD7D8D8, 0xE0E1DB, 0xEFF0EF, 0xEEEBFE,
  0xFCFDF3, 0x171718, 0x272827, 0x504F4F,
  0x50504F, 0x716F78, 0x6F7070, 0x777872,
  0x777878, 0x7F826F, 0x878D5F, 0x8C935F,
  0x9BA557, 0x97A05C, 0xA5B24D, 0xB0BF4F,
  0xA2AE55, 0xA8B454, 0x8A8E65, 0x84886A,
  0x8A8F6A, 0x8D936A, 0x989F66, 0x919669,
  0x8A8D77, 0x909375, 0x9FA866, 0xA0A76D,
  0xA7B165, 0xA7B06E, 0xAEB868, 0xA0A773,
  0xA8AF7C, 0xAEB678, 0xB4C447, 0xBFD147,
  0xBFD04E, 0xB7C176, 0xBBC37F, 0xBFC97C,
  0xCDD97F, 0xD1DF72, 0x88878A, 0x878888,
  0x8F9090, 0x9EA186, 0xB0B687, 0xB1B884,
  0xADB191, 0xB7B9AA, 0xB0AFB6, 0xC8D08C,
  0xC0C696, 0xD6DF97, 0xE0EE80, 0xE3EF96,
  0xC1C6A3, 0xC7CDA1, 0xD2D9A6, 0xCDCFBA,
  0xCFD2B6, 0xCED1B8, 0xD0D5B3, 0xE3E9B5,
  0xB0AEC1, 0xC0BFC7, 0xC1BED2, 0xCED0C3,
  0xE0DFDF, 0xE0E5C3, 0xEFF6C2, 0xF1F7CA,
  0xD1CFE2, 0xE1DEF2, 0xDFE0E0, 0xE9E7EE,
  0xE7E8E8, 0xF0EFEF, 0xE9E7FA, 0xF9F6FF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _PalplayButton_75_75 = {
  256,  // Number of entries
  1,    // Has transparency
  &_ColorsplayButton_75_75[0]
};

static GUI_CONST_STORAGE unsigned char _acplayButton_75_75[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x3C, 0x25, 0x25, 0x22, 0x22, 0x22, 0x22, 0x22, 0x25, 0x23, 
        0x1C, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x2B, 0x8A, 0xB6, 0xB6, 0xB6, 0x0B, 0x0B, 0xB6, 0xB6, 0x21, 0x0B, 0x0B, 0x0B, 0x8A, 
        0x0B, 0x0B, 0xB6, 0x0B, 0x23, 0x42, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x31, 0x0A, 0xB6, 0xB6, 0x21, 0x0B, 0x0B, 0x21, 0x21, 0x21, 0x21, 0x21, 0x21, 0x0B, 0x61, 0x61, 0x61, 
        0x61, 0x61, 0x8A, 0x8A, 0x8A, 0x0B, 0xB8, 0x43, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x0A, 0xB6, 0xB6, 0x0B, 0x21, 0x21, 0x8D, 0x8D, 0xB7, 0xB9, 0xC4, 0x46, 0x56, 0x56, 0x4B, 0x4B, 0x4B, 0x75, 0x67, 
        0x4C, 0x77, 0x72, 0x0B, 0x19, 0x19, 0x0D, 0x8A, 0x8A, 0x08, 0x2E, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0xB8, 0xB6, 0xB6, 0xB6, 0x8D, 0x08, 0x4D, 0xC6, 0x91, 0x98, 0x1A, 0x24, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x0E, 0x20, 0x3F, 0x98, 0x75, 0x66, 0x72, 0x19, 0x19, 0x0D, 0x8A, 0xB8, 0xB3, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x0A, 0x08, 0xB6, 0x8D, 0xB5, 0x73, 0x46, 0x98, 0x1B, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0xD4, 0x4A, 0x65, 0x0B, 0x19, 0x0D, 0x8A, 0xB6, 0x2E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 0x08, 0x08, 0xB6, 0x8D, 0xB5, 0x4D, 0x5A, 0x3F, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x2F, 0x2F, 0x7B, 0xD3, 0x37, 0xD3, 0x38, 0x7B, 0x3E, 
        0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x20, 0x2C, 0xBB, 0x0B, 0x0D, 0x0D, 0x8A, 0xB8, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x0A, 0xB6, 0x08, 0xB5, 0x4D, 0x3D, 0x24, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x3E, 0x37, 0x64, 0xD5, 0xA4, 0xEE, 0x6E, 0xAD, 0x10, 0xAD, 0x87, 0xEB, 0xE8, 
        0xDF, 0x5A, 0xBF, 0x38, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x32, 0x4C, 0x8A, 0x0D, 0x0D, 0xB6, 0x43, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x08, 0xB6, 0xB5, 0xB8, 0xCA, 0x3F, 0x02, 0x02, 0x02, 0x02, 0x13, 0x3E, 0x6B, 0x97, 0xED, 0xFC, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x41, 0xF3, 0x9F, 0xC1, 0xD3, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x2C, 0x71, 0x43, 0x0D, 0x8A, 0xB8, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x08, 0x08, 0xB5, 0x92, 0x6C, 0x02, 0x02, 0x02, 0x02, 0x1E, 0x38, 0x5B, 0xEC, 0x39, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xA9, 0xD0, 0xBF, 0x2F, 0x02, 0x02, 0x02, 0x02, 0x1B, 0xBD, 0x8A, 0x43, 0x0D, 0x0A, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x08, 0x08, 0x1D, 0x68, 0x3F, 0x02, 0x02, 0x02, 0x13, 0x38, 0x5C, 0x87, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x60, 0x9E, 0xD2, 0x1E, 0x02, 0x02, 0x02, 0x02, 0x64, 0x35, 0x43, 0x0D, 0x08, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x08, 0x08, 0x1D, 0xCA, 0x20, 0x02, 0x02, 0x02, 0x2F, 0x47, 0x6E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFA, 0x4F, 0x38, 0x02, 0x02, 0x02, 0x02, 0x32, 0x71, 0x43, 0x0D, 0x08, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB8, 0x08, 0x1D, 0x0A, 0xCC, 0x0E, 0x02, 0x02, 0x02, 0x38, 0xA2, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x83, 0x63, 0x0E, 0x02, 0x02, 0x02, 0x1A, 0x66, 0x43, 0x0D, 0x08, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x08, 0x1D, 0x0A, 0x3D, 0x0E, 0x02, 0x02, 0x1E, 0x6B, 0x6E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x60, 0x46, 0x51, 0x02, 0x02, 0x02, 0x24, 0x66, 0x43, 0x0D, 0xB8, 0xB1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x08, 0x1D, 0x44, 0x3D, 0x02, 0x02, 0x02, 0x2F, 0x36, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x59, 0x37, 0x02, 0x02, 0x02, 0x3F, 0x8E, 0x43, 0x0D, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0xB8, 0x1D, 0x44, 0x4F, 0x0E, 0x02, 0x02, 0x3E, 0x96, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x9D, 0xBF, 0x02, 0x02, 0x02, 0x32, 0x35, 0x43, 0x8A, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 0x1F, 0x08, 0x1D, 0x69, 0x0E, 0x02, 0x02, 0x2F, 0x96, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x9D, 0x37, 0x02, 0x02, 0x02, 0x2C, 0x8A, 0x0D, 0x0B, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x1D, 0x78, 0x1B, 0x02, 0x02, 0x1E, 0x36, 0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x59, 0x28, 0x02, 0x02, 0x02, 0x4A, 0x43, 0x0D, 0xB6, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0xB8, 0x1D, 0x45, 0x99, 0x02, 0x02, 0x02, 0x6B, 0x41, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x68, 0x20, 0x02, 0x02, 0x20, 0xBA, 0x54, 0x8A, 0x8A, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xB8, 0x44, 0xCC, 0x02, 0x02, 0x02, 0x38, 0x6E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xB0, 0x88, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFB, 0x8F, 0x02, 0x02, 0x02, 0xD4, 0x49, 0x0D, 0xB6, 0xB1, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x2B, 0x0A, 0x44, 0x93, 0x24, 0x02, 0x02, 0x2F, 0xA2, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x86, 0x15, 0x15, 0x15, 0xA6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x84, 0x37, 0x02, 0x02, 0x02, 0xBD, 0x54, 0x8A, 0x2E, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0A, 0xB8, 0x44, 0x36, 0x02, 0x02, 0x02, 0x47, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x0E, 0x13, 0x30, 0x17, 0x15, 0xA6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x4E, 0x2F, 0x02, 0x02, 0x3F, 0x35, 0x43, 0xB6, 0x3B, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x2B, 0x0A, 0x44, 0x78, 0x1B, 0x02, 0x02, 0x38, 0x6E, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x30, 0x7F, 0xCD, 0x30, 0x30, 0x17, 0x17, 0xA8, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFB, 0xBE, 0x02, 0x02, 0x02, 0x75, 0x43, 0x8A, 0x2E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xB8, 0x44, 0x36, 0x02, 0x02, 0x1E, 0x97, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x40, 0x40, 0xCE, 0x30, 0x30, 0x17, 0x17, 0xA8, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xA0, 0x7B, 0x02, 0x02, 0x51, 0x8B, 0x0D, 0x08, 0x3B, 0x00, 0x00,
  0x00, 0x00, 0x22, 0x0A, 0x44, 0x93, 0x24, 0x02, 0x02, 0xD3, 0xAD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0xDB, 0x40, 0x09, 0x5B, 0x12, 0x30, 0x17, 0x1E, 0x86, 0x01, 0x01, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x39, 0x90, 0x02, 0x02, 0x02, 0x74, 0x54, 0x8A, 0x23, 0x00, 0x00,
  0x00, 0x00, 0x31, 0x0A, 0x44, 0x4F, 0x02, 0x02, 0x13, 0x27, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0xDB, 0x40, 0x09, 0x27, 0x12, 0x13, 0x17, 0x1E, 0x86, 0x01, 0x01, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xE0, 0x3E, 0x02, 0x02, 0x2C, 0x0D, 0x0D, 0x0B, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xB8, 0x0A, 0x26, 0x02, 0x02, 0x3E, 0x85, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0xDB, 0x27, 0x12, 0x13, 0x17, 0x0E, 0xF6, 
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFA, 0x63, 0x02, 0x02, 0x20, 0x71, 0x43, 0xB6, 0x1C, 0x00,
  0x00, 0x3C, 0x0A, 0x44, 0x58, 0x20, 0x02, 0x02, 0x2C, 0x39, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 0x40, 0x03, 0x26, 0x12, 0x13, 0x15, 
        0x5D, 0xF7, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x46, 0x1E, 0x02, 0x02, 0x55, 0x54, 0x0B, 0x25, 0x00,
  0x00, 0x2B, 0x0A, 0x44, 0xCB, 0x02, 0x02, 0x1E, 0xA1, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 0x40, 0x48, 0x99, 0x12, 
        0x13, 0x15, 0x5D, 0x88, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xE1, 0x38, 0x02, 0x02, 0x98, 0x0D, 0x8A, 0x2E, 0x00,
  0x00, 0x8A, 0x0A, 0x0A, 0x5B, 0x02, 0x02, 0x3E, 0x85, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0x7F, 
        0x7C, 0x12, 0x13, 0x15, 0x5D, 0x88, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFA, 0x63, 0x02, 0x02, 0x1B, 0x35, 0x0D, 0xB6, 0x00,
  0x00, 0x1F, 0x44, 0x1F, 0x7C, 0x02, 0x02, 0xD4, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 
        0x40, 0x16, 0x3F, 0x12, 0x13, 0x15, 0x5E, 0x6F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xBD, 0x02, 0x02, 0x02, 0xBA, 0x43, 0x0B, 0x1C,
  0x3B, 0x45, 0x44, 0x58, 0x1B, 0x02, 0x02, 0x47, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0xDB, 0x09, 0x40, 0x16, 0x3F, 0x12, 0x13, 0x15, 0x5E, 0x6F, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x53, 0x2F, 0x02, 0x02, 0x55, 0x43, 0x0B, 0x42,
  0x1C, 0x1F, 0x44, 0x94, 0x0E, 0x02, 0x1E, 0xD6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0xDB, 0x09, 0x40, 0x79, 0x24, 0x12, 0x13, 0x15, 0x7E, 0xB0, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xE1, 0x38, 0x02, 0x02, 0x76, 0x0D, 0x8A, 0x22,
  0x2B, 0x0A, 0x44, 0x4E, 0x02, 0x02, 0x2F, 0xE9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0x59, 0x20, 0x12, 0x13, 0x15, 0x7E, 0xB0, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x06, 0x37, 0x02, 0x02, 0x2C, 0x0D, 0x0D, 0x2E,
  0x25, 0x0A, 0x44, 0x4F, 0x02, 0x02, 0x3E, 0x85, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0x4E, 0x20, 0x12, 0x1E, 0x15, 0xE6, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFA, 0x63, 0x02, 0x02, 0xD4, 0x49, 0x8A, 0x23,
  0x25, 0x0A, 0x0A, 0xCE, 0x02, 0x02, 0x51, 0x6E, 0x01, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0xB0, 0xFF, 0x39, 0x01, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0xCF, 0x0E, 0x13, 0x15, 0xE7, 0x01, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0xFB, 0x90, 0x02, 0x02, 0x51, 0x8B, 0x19, 0x23,
  0x25, 0x1F, 0x18, 0x36, 0x02, 0x02, 0x28, 0x0C, 0x39, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0xFF, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0x9B, 0x26, 0x13, 0x5E, 0xFF, 0x39, 0x14, 0x14, 0x14, 0x39, 0x39, 0x14, 0xFF, 0x39, 0x8F, 0x02, 0x02, 0x51, 0x35, 0x19, 0x23,
  0x25, 0x1F, 0x18, 0x36, 0x02, 0x02, 0x28, 0x0C, 0x14, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xFD, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0x39, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0x03, 0x1A, 0x30, 0x17, 0xA5, 0xFF, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x14, 0x39, 0xBC, 0x02, 0x02, 0x51, 0x35, 0x19, 0x23,
  0x25, 0x1F, 0x18, 0x36, 0x02, 0x02, 0x28, 0x87, 0xFD, 0x41, 0x41, 0x41, 0x41, 0x41, 0xAE, 0x41, 0xFD, 0xAE, 0x41, 0xAE, 0x41, 0xAE, 0x41, 0xAE, 0xAF, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 0x40, 0x50, 0x12, 0x13, 0x17, 0x5E, 0xFD, 0xFD, 0xAE, 0xAE, 0xFD, 0xAE, 0xAE, 0xAE, 0xAE, 0xAE, 0x41, 0xBC, 0x02, 0x02, 0x51, 0x35, 0x19, 0x23,
  0x25, 0x1F, 0x18, 0x36, 0x02, 0x02, 0x51, 0xAA, 0x41, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xAF, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0x7F, 0x20, 0x30, 0x1E, 0x1E, 0xEF, 0xAF, 0x41, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xFD, 0xFA, 0xC0, 0x02, 0x02, 0x51, 0x35, 0x19, 0x23,
  0x22, 0x45, 0x18, 0x50, 0x02, 0x02, 0x3E, 0xA7, 0xFB, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFE, 0x15, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0x03, 0x03, 0x09, 0x40, 0x5B, 0x12, 0x13, 0x17, 0x7E, 0xFB, 0x41, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0x11, 0xA9, 0x76, 0x02, 0x02, 0x1A, 0x49, 0x19, 0x23,
  0x23, 0x0A, 0x0A, 0x95, 0x0E, 0x02, 0x2F, 0xA4, 0x60, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x89, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0x03, 0x03, 0xDB, 0x40, 0x79, 0x02, 0x30, 0x1E, 0x02, 0xF5, 0x89, 0x60, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x11, 0x84, 0x2C, 0x02, 0x02, 0x32, 0x8A, 0x0D, 0x43,
  0x1C, 0x1F, 0x0A, 0xC9, 0x20, 0x02, 0x1E, 0xA1, 0x60, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xF4, 0xFA, 0xF9, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x03, 0xDB, 0x09, 0x09, 0x26, 0x12, 0x13, 0x17, 0xA5, 0xF9, 0x60, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0xFA, 0x10, 0x10, 0xFA, 0xFA, 0xFC, 0x04, 0x28, 0x02, 0x02, 0x64, 0x0D, 0x8A, 0x22,
  0xB1, 0x1F, 0x0A, 0x93, 0x3F, 0x02, 0x02, 0x27, 0x29, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xF9, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
        0x09, 0x40, 0xCF, 0x30, 0x30, 0x17, 0x5D, 0xAB, 0xF9, 0xF4, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xF4, 0x0C, 0xF4, 0xF4, 0x0C, 0xF4, 0xF4, 0xF4, 0xF4, 0x60, 0x9D, 0x1B, 0x02, 0x02, 0x4A, 0x43, 0x0B, 0x22,
  0x00, 0xDB, 0x0A, 0x1F, 0x99, 0x02, 0x02, 0x32, 0x2D, 0x0C, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0x29, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 
        0x48, 0x3F, 0x12, 0x13, 0x17, 0xE5, 0x29, 0x0C, 0xAC, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0xFA, 0xC7, 0x0E, 0x02, 0x02, 0x74, 0x43, 0x0B, 0x3C,
  0x00, 0x08, 0x0A, 0x18, 0x27, 0x02, 0x02, 0x1B, 0xA3, 0x5F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xF8, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0x50, 
        0x12, 0x13, 0x17, 0x5E, 0x0F, 0x5F, 0x5F, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0x5F, 0xAC, 0x5F, 0xAC, 0x06, 0x4B, 0x02, 0x02, 0x0E, 0x65, 0x43, 0xB6, 0x00,
  0x00, 0x23, 0x0A, 0x44, 0x50, 0x02, 0x02, 0x1E, 0x9F, 0x5F, 0xA9, 0xA9, 0xA9, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xA9, 0x0F, 0x0F, 0x0F, 0x0F, 0xF8, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0x16, 0x20, 0x30, 
        0x13, 0x13, 0xEA, 0xF8, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0xAC, 0x04, 0xD4, 0x02, 0x02, 0x1A, 0x8B, 0x0D, 0x43, 0x00,
  0x00, 0xB2, 0x1F, 0x0A, 0x94, 0x0E, 0x02, 0x13, 0x6C, 0x2D, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xF8, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x40, 0x5B, 0x12, 0x13, 0x17, 
        0xD9, 0x2D, 0x2D, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0x5F, 0x59, 0x0E, 0x02, 0x02, 0x76, 0x0D, 0x8A, 0x2B, 0x00,
  0x00, 0x3A, 0xDB, 0x0A, 0x45, 0x1A, 0x02, 0x02, 0x1B, 0x83, 0xA9, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x2D, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0x03, 0x03, 0xDB, 0x40, 0x59, 0x02, 0x30, 0x13, 0x02, 0xA7, 
        0x2D, 0x06, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xA9, 0xF1, 0x4B, 0x02, 0x02, 0x02, 0xBB, 0x43, 0x0B, 0x42, 0x00,
  0x00, 0x00, 0x8A, 0x0A, 0x18, 0x36, 0x02, 0x02, 0x02, 0x97, 0x2D, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xF2, 0x17, 0x12, 0x16, 0x09, 0x03, 0x03, 0x03, 0xDB, 0x09, 0x09, 0x26, 0x12, 0x13, 0x17, 0xD8, 0x2D, 0x06, 
        0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xA9, 0x80, 0x28, 0x02, 0x02, 0x51, 0x35, 0x0D, 0xB6, 0x00, 0x00,
  0x00, 0x00, 0x25, 0x0A, 0x44, 0xC9, 0x20, 0x02, 0x02, 0x1A, 0x05, 0xF1, 0x84, 0x84, 0x84, 0x84, 0x84, 0xF1, 0xF1, 0xF1, 0xF1, 0x84, 0x84, 0xF1, 0xF2, 0x17, 0x12, 0x16, 0x09, 0x03, 0xDB, 0x09, 0x40, 0xCF, 0x30, 0x30, 0x13, 0x5D, 0x84, 0xF2, 0xF1, 0x06, 
        0xF1, 0xF1, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0xF1, 0x46, 0x02, 0x02, 0x02, 0x4B, 0x0D, 0x8A, 0x31, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x0A, 0x18, 0x6C, 0x02, 0x02, 0x0E, 0xDE, 0xF1, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0xF2, 0x17, 0x12, 0x16, 0x09, 0xDB, 0x40, 0x48, 0x3F, 0x12, 0x13, 0x17, 0xE3, 0xF2, 0xF1, 0x84, 0x84, 0x84, 
        0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x06, 0x9C, 0x32, 0x02, 0x02, 0x0E, 0x65, 0x43, 0xB6, 0xB1, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x2E, 0x0A, 0x44, 0x95, 0x0E, 0x02, 0x02, 0x7C, 0xE2, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0x34, 0x17, 0x12, 0x16, 0x09, 0x40, 0x50, 0x12, 0x13, 0x17, 0x7D, 0xA3, 0x34, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 
        0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0xA3, 0x84, 0x34, 0x46, 0x0E, 0x02, 0x02, 0x2C, 0x8A, 0x0D, 0x0B, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xDB, 0x0A, 0x1F, 0x26, 0x02, 0x02, 0x02, 0x7A, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0xF0, 0x17, 0x12, 0x48, 0x7F, 0x20, 0x30, 0x13, 0x13, 0xE4, 0x34, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
        0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0xF1, 0x2A, 0x1A, 0x02, 0x02, 0x0E, 0x4C, 0x43, 0x0B, 0xB2, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x31, 0x0A, 0x44, 0x95, 0x0E, 0x02, 0x02, 0x1B, 0xE0, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0xF0, 0x17, 0x02, 0x26, 0x12, 0x13, 0x30, 0x9A, 0xF0, 0xE2, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
        0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x04, 0x91, 0x02, 0x02, 0x02, 0x64, 0x8A, 0x0D, 0x8A, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3A, 0x1F, 0x0A, 0x18, 0x47, 0x02, 0x02, 0x02, 0x99, 0x33, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0x7D, 0x13, 0x30, 0x13, 0x0E, 0xA0, 0xF0, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 
        0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0x05, 0xE2, 0x69, 0x0E, 0x02, 0x02, 0x20, 0x65, 0x43, 0x0B, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x0A, 0x0A, 0xC8, 0x24, 0x02, 0x02, 0x02, 0x5C, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x9A, 0x7D, 0xD7, 0x33, 0x33, 0x33, 0x33, 0xE2, 0x33, 0x33, 0x33, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 
        0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0xE2, 0x16, 0x24, 0x02, 0x02, 0x02, 0x4B, 0x19, 0x0D, 0xB6, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xB8, 0x44, 0xCB, 0x0E, 0x02, 0x02, 0x20, 0x9E, 0x33, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x33, 0x33, 0x33, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xE2, 0xDC, 0x98, 0x02, 0x02, 0x02, 0x32, 0x8B, 0x0D, 0xB6, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x1F, 0x0A, 0x0A, 0x36, 0x02, 0x02, 0x02, 0x24, 0x53, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
        0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x07, 0x91, 0x02, 0x02, 0x02, 0x1B, 0x8E, 0x0D, 0x8A, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8A, 0x0A, 0x44, 0x45, 0x6C, 0x02, 0x02, 0x02, 0x7C, 0x9D, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 0x82, 
        0x82, 0x82, 0x82, 0x82, 0x82, 0x04, 0x04, 0x04, 0x82, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xDC, 0x3D, 0x0E, 0x02, 0x02, 0x20, 0xBB, 0x19, 0x0D, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xB8, 0x44, 0x93, 0x99, 0x02, 0x02, 0x02, 0x3F, 0x53, 0x81, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 
        0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x9C, 0x82, 0x9C, 0x9C, 0x82, 0x82, 0xDC, 0x57, 0x0E, 0x02, 0x02, 0x0E, 0x67, 0x19, 0x0D, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x52, 0xB8, 0x44, 0xC8, 0x7C, 0x02, 0x02, 0x02, 0x1B, 0xD1, 0x07, 0x07, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9C, 0x81, 0x79, 0x26, 0x02, 0x02, 0x02, 0x0E, 0x75, 0x61, 0x0D, 0x08, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0xB8, 0x44, 0xC9, 0x1A, 0x02, 0x02, 0x02, 0x0E, 0x27, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xDC, 0xCB, 0x24, 0x02, 0x02, 0x02, 0x20, 0x55, 0x61, 0x0D, 0xB6, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0xB8, 0x44, 0xC8, 0x26, 0x02, 0x02, 0x02, 0x13, 0x3F, 0x53, 0xDC, 0xDC, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
        0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xDC, 0x2A, 0x47, 0x0E, 0x02, 0x02, 0x02, 0x1B, 0x67, 0x61, 0x19, 0xB6, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x1F, 0xB8, 0x44, 0x93, 0x6C, 0x02, 0x02, 0x02, 0x02, 0x20, 0x27, 0x9D, 0x52, 0x52, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 
        0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0x52, 0xDC, 0x6A, 0x3F, 0x02, 0x02, 0x02, 0x02, 0x3F, 0xC2, 0x61, 0x0D, 0xB6, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0xDB, 0xB8, 0x44, 0x0A, 0x36, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x24, 0x5C, 0xDD, 0x52, 0x52, 0x52, 0x52, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 0xDC, 
        0xDC, 0xDC, 0xDC, 0xDC, 0x52, 0x52, 0x52, 0x2A, 0xCD, 0x1A, 0x0E, 0x02, 0x02, 0x02, 0x02, 0x98, 0x8C, 0x61, 0x0D, 0x08, 0x2B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 0x0A, 0xB8, 0xB8, 0x44, 0x68, 0x1A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x20, 0x99, 0xD0, 0x2A, 0x52, 0x09, 0x09, 0xDA, 0xDA, 0xDA, 0x03, 0xDA, 0x03, 0x03, 0x03, 0xDA, 0xDA, 
        0xDA, 0xDA, 0xDA, 0xDA, 0x48, 0x59, 0x5B, 0x24, 0x02, 0x02, 0x02, 0x02, 0x02, 0x20, 0x4A, 0xB6, 0x19, 0x8A, 0xB8, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB6, 0x0A, 0xB8, 0x1D, 0x45, 0x5A, 0x24, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x24, 0x99, 0x96, 0x53, 0x2A, 0xDC, 0xDA, 0x09, 0x09, 0x09, 0x09, 0x09, 0xDA, 0x48, 
        0x2A, 0x59, 0x6A, 0x27, 0x3F, 0x0E, 0x13, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x57, 0x77, 0x61, 0x8A, 0x8A, 0x08, 0x3B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2B, 0x0A, 0xB8, 0x1D, 0x1D, 0x92, 0x3D, 0x24, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0E, 0x24, 0x7C, 0x99, 0x27, 0x5C, 0x5C, 0x5C, 0x27, 0x26, 0x7C, 
        0x24, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x20, 0x57, 0xC2, 0x0B, 0x61, 0x8A, 0x08, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3A, 0x0B, 0x1F, 0xB8, 0x1D, 0x1D, 0x45, 0x4F, 0x7C, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x24, 0x56, 0xC3, 0x21, 0x61, 0x8A, 0xB6, 0xB6, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x8A, 0x0A, 0x1D, 0x1D, 0x1D, 0x0A, 0x78, 0xCC, 0x99, 0x20, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
        0x02, 0x02, 0x0E, 0x20, 0x1A, 0x57, 0x67, 0x8C, 0x21, 0x61, 0x0B, 0xB6, 0x0B, 0xB2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB1, 0x0B, 0x1F, 0x08, 0x08, 0xB5, 0x1D, 0xB8, 0x92, 0x68, 0x5A, 0x57, 0x6C, 0x1A, 0x3F, 0x24, 0x24, 0x24, 0x24, 0x1A, 0x47, 
        0x56, 0x46, 0xC5, 0xB9, 0xB7, 0x21, 0x61, 0x0B, 0x0B, 0xB6, 0xB6, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x31, 0x0A, 0xB8, 0xB8, 0x08, 0x08, 0xB5, 0xB5, 0x08, 0xB8, 0x73, 0x62, 0x4D, 0x62, 0x62, 0x62, 0x73, 0x08, 
        0x8D, 0x8D, 0x21, 0x21, 0x0B, 0xB6, 0xB6, 0xB8, 0x2E, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB2, 0x2B, 0x8A, 0x0A, 0xB8, 0xB8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x8D, 0x8D, 0xB6, 
        0x08, 0xB6, 0x08, 0xB8, 0x0B, 0x23, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x22, 0x25, 0x2E, 0x2E, 0xB4, 0xB4, 0xB4, 0xB4, 0xB3, 0x31, 0x43, 
        0x22, 0x25, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmplayButton_75_75 = {
  75, // xSize
  75, // ySize
  75, // BytesPerLine
  8, // BitsPerPixel
  _acplayButton_75_75,  // Pointer to picture data (indices)
  &_PalplayButton_75_75   // Pointer to palette
};

/*************************** End of file ****************************/
