/*******************************************************************************
  MPLAB Harmony Graphics Composer Generated Implementation File

  File Name:
    libaria_init.c

  Summary:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

  Description:
    Build-time generated implementation from the MPLAB Harmony
    Graphics Composer.

    Created with MPLAB Harmony Version 2.06
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

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
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

#include "gfx/libaria/libaria_init.h"

laScheme defaultScheme;
laScheme ProgressScheme;
laScheme defaultPaletteScheme;
laImageWidget* WatermarkImage;
laImageWidget* LogoImage;
laLabelWidget* TitleLabel;
laWidget* SelectMediumPanel;
laLabelWidget* SelectMediumLabel;
laButtonWidget* SDCardButton;
laButtonWidget* USBButton;
laWidget* ErrorMsgPanel;
laLabelWidget* NoMediumLabel2;
laLabelWidget* NoMediumLabel1;
laWidget* InfoPanel;
laLabelWidget* InfoLabel1;
laLabelWidget* InfoLabel2;
laButtonWidget* InfoOKButton;
laWidget* FlashingPanel;
laProgressBarWidget* FlashingProgressBar;
laLabelWidget* FlashingLabel;
laLabelWidget* RecordsTotalLabel;
laLabelWidget* OfLabel;
laLabelWidget* CurrentRecordLabel;


static void ScreenCreate_default(laScreen* screen);


int32_t libaria_initialize(void)
{
    laScreen* screen;

    laScheme_Initialize(&defaultScheme, GFX_COLOR_MODE_RGB_565);
    defaultScheme.base = 0x0;
    defaultScheme.highlight = 0x0;
    defaultScheme.highlightLight = 0x20;
    defaultScheme.shadow = 0x2;
    defaultScheme.shadowDark = 0xB6;
    defaultScheme.foreground = 0x4;
    defaultScheme.foregroundInactive = 0x5;
    defaultScheme.foregroundDisabled = 0x2;
    defaultScheme.background = 0x20;
    defaultScheme.backgroundInactive = 0x5;
    defaultScheme.backgroundDisabled = 0x0;
    defaultScheme.text = 0x4;
    defaultScheme.textHighlight = 0x6;
    defaultScheme.textHighlightText = 0x20;
    defaultScheme.textInactive = 0x5;
    defaultScheme.textDisabled = 0x7;

    laScheme_Initialize(&ProgressScheme, GFX_COLOR_MODE_RGB_565);
    ProgressScheme.base = 0x0;
    ProgressScheme.highlight = 0x0;
    ProgressScheme.highlightLight = 0xFD;
    ProgressScheme.shadow = 0x2;
    ProgressScheme.shadowDark = 0xB6;
    ProgressScheme.foreground = 0x4;
    ProgressScheme.foregroundInactive = 0x5;
    ProgressScheme.foregroundDisabled = 0x2;
    ProgressScheme.background = 0x20;
    ProgressScheme.backgroundInactive = 0x5;
    ProgressScheme.backgroundDisabled = 0x0;
    ProgressScheme.text = 0x4;
    ProgressScheme.textHighlight = 0x6;
    ProgressScheme.textHighlightText = 0x20;
    ProgressScheme.textInactive = 0x5;
    ProgressScheme.textDisabled = 0x7;

    laScheme_Initialize(&defaultPaletteScheme, GFX_COLOR_MODE_RGB_565);
    defaultPaletteScheme.base = 0x0;
    defaultPaletteScheme.highlight = 0x0;
    defaultPaletteScheme.highlightLight = 0x20;
    defaultPaletteScheme.shadow = 0x2;
    defaultPaletteScheme.shadowDark = 0xB6;
    defaultPaletteScheme.foreground = 0x4;
    defaultPaletteScheme.foregroundInactive = 0x5;
    defaultPaletteScheme.foregroundDisabled = 0x2;
    defaultPaletteScheme.background = 0x20;
    defaultPaletteScheme.backgroundInactive = 0x5;
    defaultPaletteScheme.backgroundDisabled = 0x0;
    defaultPaletteScheme.text = 0x4;
    defaultPaletteScheme.textHighlight = 0x6;
    defaultPaletteScheme.textHighlightText = 0x20;
    defaultPaletteScheme.textInactive = 0x5;
    defaultPaletteScheme.textDisabled = 0x7;

    GFX_Set(GFXF_DRAW_PIPELINE_MODE, GFX_PIPELINE_GCUGPU);
    GFX_Set(GFXF_GLOBAL_PALETTE, globalColorPalette);
    laContext_SetStringTable(&stringTable);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_default);
    laContext_AddScreen(screen);

    laContext_SetActiveScreen(0);

	return 0;
}

static void ScreenCreate_default(laScreen* screen)
{
    laLayer* layer0;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 480, 272);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer0, &defaultScheme);
    laLayer_SetBufferCount(layer0, 2);
    laLayer_SetVSync(layer0, LA_FALSE);

    laScreen_SetLayer(screen, 0, layer0);

    WatermarkImage = laImageWidget_New();
    laWidget_SetPosition((laWidget*)WatermarkImage, 143, 67);
    laWidget_SetSize((laWidget*)WatermarkImage, 180, 126);
    laWidget_SetScheme((laWidget*)WatermarkImage, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)WatermarkImage, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)WatermarkImage, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(WatermarkImage, &harmony_faded);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)WatermarkImage);

    LogoImage = laImageWidget_New();
    laWidget_SetPosition((laWidget*)LogoImage, 11, 11);
    laWidget_SetSize((laWidget*)LogoImage, 32, 32);
    laWidget_SetScheme((laWidget*)LogoImage, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)LogoImage, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)LogoImage, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(LogoImage, &mchpLogo);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)LogoImage);

    TitleLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)TitleLabel, 53, 14);
    laWidget_SetSize((laWidget*)TitleLabel, 305, 25);
    laWidget_SetScheme((laWidget*)TitleLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)TitleLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)TitleLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(TitleLabel, laString_CreateFromID(string_Title));
    laLabelWidget_SetHAlignment(TitleLabel, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)TitleLabel);

    SelectMediumPanel = laWidget_New();
    laWidget_SetPosition((laWidget*)SelectMediumPanel, 11, 51);
    laWidget_SetSize((laWidget*)SelectMediumPanel, 460, 212);
    laWidget_SetScheme((laWidget*)SelectMediumPanel, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)SelectMediumPanel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)SelectMediumPanel, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer0, SelectMediumPanel);

    SelectMediumLabel = laLabelWidget_New();
    laWidget_SetSize((laWidget*)SelectMediumLabel, 316, 25);
    laWidget_SetScheme((laWidget*)SelectMediumLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)SelectMediumLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)SelectMediumLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(SelectMediumLabel, laString_CreateFromID(string_SelectSource));
    laLabelWidget_SetHAlignment(SelectMediumLabel, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)SelectMediumPanel, (laWidget*)SelectMediumLabel);

    SDCardButton = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)SDCardButton, 19, 21);
    laWidget_SetSize((laWidget*)SDCardButton, 120, 120);
    laWidget_SetVisible((laWidget*)SDCardButton, LA_FALSE);
    laWidget_SetScheme((laWidget*)SDCardButton, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)SDCardButton, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)SDCardButton, LA_WIDGET_BORDER_BEVEL);
    laButtonWidget_SetText(SDCardButton, laString_CreateFromID(string_SDCard));
    laButtonWidget_SetPressedImage(SDCardButton, &sdcard_sm);
    laButtonWidget_SetReleasedImage(SDCardButton, &sdcard_sm);
    laButtonWidget_SetImagePosition(SDCardButton, LA_RELATIVE_POSITION_ABOVE);
    laWidget_AddChild((laWidget*)SelectMediumPanel, (laWidget*)SDCardButton);

    USBButton = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)USBButton, 165, 21);
    laWidget_SetSize((laWidget*)USBButton, 120, 108);
    laWidget_SetVisible((laWidget*)USBButton, LA_FALSE);
    laWidget_SetScheme((laWidget*)USBButton, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)USBButton, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)USBButton, LA_WIDGET_BORDER_BEVEL);
    laButtonWidget_SetText(USBButton, laString_CreateFromID(string_USB));
    laButtonWidget_SetPressedImage(USBButton, &usb_icon_sm);
    laButtonWidget_SetReleasedImage(USBButton, &usb_icon_sm);
    laButtonWidget_SetImagePosition(USBButton, LA_RELATIVE_POSITION_ABOVE);
    laWidget_AddChild((laWidget*)SelectMediumPanel, (laWidget*)USBButton);

    ErrorMsgPanel = laWidget_New();
    laWidget_SetPosition((laWidget*)ErrorMsgPanel, 77, 134);
    laWidget_SetSize((laWidget*)ErrorMsgPanel, 304, 57);
    laWidget_SetScheme((laWidget*)ErrorMsgPanel, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)ErrorMsgPanel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ErrorMsgPanel, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)SelectMediumPanel, ErrorMsgPanel);

    NoMediumLabel2 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)NoMediumLabel2, 6, 28);
    laWidget_SetSize((laWidget*)NoMediumLabel2, 288, 25);
    laWidget_SetScheme((laWidget*)NoMediumLabel2, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)NoMediumLabel2, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)NoMediumLabel2, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(NoMediumLabel2, laString_CreateFromID(string_NoValidMedium2));
    laLabelWidget_SetHAlignment(NoMediumLabel2, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)ErrorMsgPanel, (laWidget*)NoMediumLabel2);

    NoMediumLabel1 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)NoMediumLabel1, 33, 2);
    laWidget_SetSize((laWidget*)NoMediumLabel1, 240, 25);
    laWidget_SetScheme((laWidget*)NoMediumLabel1, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)NoMediumLabel1, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)NoMediumLabel1, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(NoMediumLabel1, laString_CreateFromID(string_NoValidMedium));
    laLabelWidget_SetHAlignment(NoMediumLabel1, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)ErrorMsgPanel, (laWidget*)NoMediumLabel1);

    InfoPanel = laWidget_New();
    laWidget_SetPosition((laWidget*)InfoPanel, 11, 51);
    laWidget_SetSize((laWidget*)InfoPanel, 459, 210);
    laWidget_SetVisible((laWidget*)InfoPanel, LA_FALSE);
    laWidget_SetScheme((laWidget*)InfoPanel, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)InfoPanel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoPanel, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer0, InfoPanel);

    InfoLabel1 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)InfoLabel1, -2, 0);
    laWidget_SetSize((laWidget*)InfoLabel1, 443, 25);
    laWidget_SetScheme((laWidget*)InfoLabel1, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)InfoLabel1, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoLabel1, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(InfoLabel1, laString_CreateFromID(string_FileNotFound1));
    laLabelWidget_SetHAlignment(InfoLabel1, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)InfoPanel, (laWidget*)InfoLabel1);

    InfoLabel2 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)InfoLabel2, 0, 25);
    laWidget_SetSize((laWidget*)InfoLabel2, 134, 25);
    laWidget_SetScheme((laWidget*)InfoLabel2, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)InfoLabel2, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoLabel2, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(InfoLabel2, laString_CreateFromID(string_FileNotFound2));
    laLabelWidget_SetHAlignment(InfoLabel2, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)InfoPanel, (laWidget*)InfoLabel2);

    InfoOKButton = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)InfoOKButton, 170, 158);
    laWidget_SetSize((laWidget*)InfoOKButton, 120, 44);
    laWidget_SetScheme((laWidget*)InfoOKButton, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)InfoOKButton, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)InfoOKButton, LA_WIDGET_BORDER_BEVEL);
    laButtonWidget_SetText(InfoOKButton, laString_CreateFromID(string_Ok));
    laWidget_AddChild((laWidget*)InfoPanel, (laWidget*)InfoOKButton);

    FlashingPanel = laWidget_New();
    laWidget_SetPosition((laWidget*)FlashingPanel, 9, 196);
    laWidget_SetSize((laWidget*)FlashingPanel, 461, 64);
    laWidget_SetVisible((laWidget*)FlashingPanel, LA_FALSE);
    laWidget_SetScheme((laWidget*)FlashingPanel, &defaultPaletteScheme);
    laWidget_SetBackgroundType((laWidget*)FlashingPanel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)FlashingPanel, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer0, FlashingPanel);

    FlashingProgressBar = laProgressBarWidget_New();
    laWidget_SetPosition((laWidget*)FlashingProgressBar, 2, 30);
    laWidget_SetSize((laWidget*)FlashingProgressBar, 460, 25);
    laWidget_SetScheme((laWidget*)FlashingProgressBar, &ProgressScheme);
    laWidget_SetBackgroundType((laWidget*)FlashingProgressBar, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)FlashingProgressBar, LA_WIDGET_BORDER_BEVEL);
    laWidget_AddChild((laWidget*)FlashingPanel, (laWidget*)FlashingProgressBar);

    FlashingLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)FlashingLabel, 1, 1);
    laWidget_SetSize((laWidget*)FlashingLabel, 460, 25);
    laWidget_SetScheme((laWidget*)FlashingLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)FlashingLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)FlashingLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(FlashingLabel, laString_CreateFromID(string_Flashing));
    laLabelWidget_SetHAlignment(FlashingLabel, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)FlashingPanel, (laWidget*)FlashingLabel);

    RecordsTotalLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)RecordsTotalLabel, 382, 0);
    laWidget_SetSize((laWidget*)RecordsTotalLabel, 80, 25);
    laWidget_SetVisible((laWidget*)RecordsTotalLabel, LA_FALSE);
    laWidget_SetScheme((laWidget*)RecordsTotalLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)RecordsTotalLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)RecordsTotalLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(RecordsTotalLabel, laString_CreateFromID(string_stringNumberFiller));
    laLabelWidget_SetHAlignment(RecordsTotalLabel, LA_HALIGN_RIGHT);
    laWidget_AddChild((laWidget*)FlashingPanel, (laWidget*)RecordsTotalLabel);

    OfLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)OfLabel, 360, 0);
    laWidget_SetSize((laWidget*)OfLabel, 24, 25);
    laWidget_SetVisible((laWidget*)OfLabel, LA_FALSE);
    laWidget_SetScheme((laWidget*)OfLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)OfLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)OfLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(OfLabel, laString_CreateFromID(string_Of));
    laLabelWidget_SetHAlignment(OfLabel, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)FlashingPanel, (laWidget*)OfLabel);

    CurrentRecordLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)CurrentRecordLabel, 278, 0);
    laWidget_SetSize((laWidget*)CurrentRecordLabel, 80, 25);
    laWidget_SetVisible((laWidget*)CurrentRecordLabel, LA_FALSE);
    laWidget_SetScheme((laWidget*)CurrentRecordLabel, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)CurrentRecordLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)CurrentRecordLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(CurrentRecordLabel, laString_CreateFromID(string_stringNumberFiller));
    laLabelWidget_SetHAlignment(CurrentRecordLabel, LA_HALIGN_RIGHT);
    laWidget_AddChild((laWidget*)FlashingPanel, (laWidget*)CurrentRecordLabel);

}


