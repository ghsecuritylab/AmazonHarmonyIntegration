/*******************************************************************************
  MPLAB Harmony Application Source File
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It 
    implements the logic of the application's state machine and it may call 
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "app.h"
#include "app_splash.h"
#include "gfx/hal/gfx.h"
#include "framework/gfx/gfx_assets.h"
#include "framework/gfx/libaria/libaria_init.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.
    
    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
uint32_t i;

uint32_t frame = 0;

uint32_t currentLanguage = 0;
uint32_t currentWeather = 0;

void app_weatherButtonClicked()
{
    if(currentWeather == 0)
    {
        currentWeather = 1;
        
        laImageWidget_SetImage(CloudIcon, &rain_icon_sm);
        laLabelWidget_SetText(LabelWidget3, laString_CreateFromID(string_Rain));
    }
    else if(currentWeather == 1)
    {
        currentWeather = 2;
        
        laImageWidget_SetImage(CloudIcon, &sun_icon_sm);
        laLabelWidget_SetText(LabelWidget3, laString_CreateFromID(string_Sunny));
    }    
    else if(currentWeather == 2)
    {
        currentWeather = 0;
        
        laImageWidget_SetImage(CloudIcon, &cloud_icon);
        laLabelWidget_SetText(LabelWidget3, laString_CreateFromID(string_Cloudy));
    }
}

void app_cycleLanguage()
{
    uint32_t language = laContext_GetStringLanguage();
    
    if(language == language_English)
        laContext_SetStringLanguage(language_Chinese);
    else if(language == language_Chinese)
        laContext_SetStringLanguage(language_Spanish);
    else if(language == language_Spanish)
        laContext_SetStringLanguage(language_English);
}

void APP_Tasks ( void )
{

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            appData.state = APP_STATE_SPLASH;            
            break;
        }

        case APP_STATE_SPLASH:
        {
            if (APP_IsSplashScreenComplete())
            {
                laContext_SetActiveScreen(MainScreen_ID);                

                appData.state = APP_STATE_DRAW;
            }
            break;
        }
        
        case APP_STATE_DRAW:
        {
            // Do not continue to trigger any redraw if any layer hasn't been completely drawn
            if (laContext_IsDrawing())
                break;

            if (laContext_GetActiveScreen() && 
                laContext_GetActiveScreen()->id != MainScreen_ID)
                 break;
            
            currentWeather = 0;        
            laImageWidget_SetImage(CloudIcon, &cloud_icon);
            laLabelWidget_SetText(LabelWidget3, laString_CreateFromID(string_Cloudy));            
            
            appData.state = APP_STATE_DONE;
            break;
        }

        case APP_STATE_DONE:
        {
            break;
        }
    }
}

 

/*******************************************************************************
 End of File
 */
