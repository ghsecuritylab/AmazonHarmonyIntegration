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
laScheme clearScheme;
laScheme labelModeScheme1;
laScheme titleLabelScheme;
laScheme labelModeScheme0;
laScheme labelModeScheme3;
laScheme GradientScheme;
laScheme labelModeScheme2;
laScheme blackScheme;
laImageWidget* ImageWidget1;
laImageWidget* ImageWidget3;
laImageWidget* ImageWidget2;
laImageWidget* ImageWidget4;
laImageWidget* ImageWidget;
laLabelWidget* LabelWidget3;
laRadialMenuWidget* RadialMenuWidget_Main;
laImagePlusWidget* RadialMenuWidget_Main_Item0;
laImagePlusWidget* RadialMenuWidget_Main_Item1;
laImagePlusWidget* RadialMenuWidget_Main_Item2;
laImagePlusWidget* RadialMenuWidget_Main_Item3;
laButtonWidget* InfoButton;
laLabelWidget* ModeLabel;
laImageWidget* InfoPageHarmonyLogo;
laImageWidget* ImageWidget7;
laImageWidget* ImageWidget;
laWidget* InfoTextDragPanel;
laImageWidget* InfoTextImage;
laWidget* PanelWidget1;
laLabelWidget* TextTitle;
laButtonWidget* ReturnToMainButton;
laButtonWidget* ButtonWidget;
laImageWidget* ImageWidget;
laLabelWidget* LabelWidget;
laButtonWidget* ButtonWidget4;
laRadialMenuWidget* RadialMenuWidget_Album;
laImagePlusWidget* RadialMenuWidget_Album_Item0;
laImagePlusWidget* RadialMenuWidget_Album_Item1;
laImagePlusWidget* RadialMenuWidget_Album_Item2;
laImagePlusWidget* RadialMenuWidget_Album_Item3;
laImagePlusWidget* RadialMenuWidget_Album_Item4;
laImagePlusWidget* RadialMenuWidget_Album_Item5;
laImagePlusWidget* RadialMenuWidget_Album_Item6;
laImagePlusWidget* RadialMenuWidget_Album_Item7;
laImagePlusWidget* RadialMenuWidget_Album_Item8;
laImagePlusWidget* RadialMenuWidget_Album_Item9;
laButtonWidget* ButtonWidget2;
laImageWidget* ImageWidget;
laLabelWidget* LabelWidget7;
laRadialMenuWidget* RadialMenuWidget_Business;
laImagePlusWidget* RadialMenuWidget_Business_Item0;
laImagePlusWidget* RadialMenuWidget_Business_Item1;
laImagePlusWidget* RadialMenuWidget_Business_Item2;
laImagePlusWidget* RadialMenuWidget_Business_Item3;
laImagePlusWidget* RadialMenuWidget_Business_Item4;
laImagePlusWidget* RadialMenuWidget_Business_Item5;
laButtonWidget* ButtonWidget8;
laButtonWidget* ButtonWidget6;
laLabelWidget* LabelWidget2;
laRadialMenuWidget* RadialMenuWidget4;
laImagePlusWidget* RadialMenuWidget4_Item0;
laImagePlusWidget* RadialMenuWidget4_Item1;
laImagePlusWidget* RadialMenuWidget4_Item2;
laImagePlusWidget* RadialMenuWidget4_Item3;
laImagePlusWidget* RadialMenuWidget4_Item4;
laImagePlusWidget* RadialMenuWidget4_Item5;
laImagePlusWidget* RadialMenuWidget4_Item6;
laButtonWidget* ButtonWidget3;
laButtonWidget* ButtonWidget1;


static void ScreenCreate_SplashScreen(laScreen* screen);
static void ScreenCreate_MainScreen(laScreen* screen);
static void ScreenCreate_InfoScreen(laScreen* screen);
static void ScreenCreate_AlbumScreen(laScreen* screen);
static void ScreenCreate_BusinessScreen(laScreen* screen);
static void ScreenCreate_PortraitScreen(laScreen* screen);


int32_t libaria_initialize(void)
{
    laScreen* screen;

    laScheme_Initialize(&defaultScheme, GFX_COLOR_MODE_RGBA_8888);
    defaultScheme.base = 0xC8D0D4FF;
    defaultScheme.highlight = 0xC8D0D4FF;
    defaultScheme.highlightLight = 0xFFFFFFFF;
    defaultScheme.shadow = 0x808080FF;
    defaultScheme.shadowDark = 0x404040FF;
    defaultScheme.foreground = 0xE0E0E0FF;
    defaultScheme.foregroundInactive = 0xD6E3E7FF;
    defaultScheme.foregroundDisabled = 0x808080FF;
    defaultScheme.background = 0xFFFFFFFF;
    defaultScheme.backgroundInactive = 0xD6E3E7FF;
    defaultScheme.backgroundDisabled = 0xC8D0D4FF;
    defaultScheme.text = 0xFF;
    defaultScheme.textHighlight = 0xFFFF;
    defaultScheme.textHighlightText = 0xFFFFFFFF;
    defaultScheme.textInactive = 0xD6E3E7FF;
    defaultScheme.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&clearScheme, GFX_COLOR_MODE_RGBA_8888);
    clearScheme.base = 0x0;
    clearScheme.highlight = 0xC8D0D4FF;
    clearScheme.highlightLight = 0xFFFFFFFF;
    clearScheme.shadow = 0x808080FF;
    clearScheme.shadowDark = 0x404040FF;
    clearScheme.foreground = 0xFF;
    clearScheme.foregroundInactive = 0xD6E3E7FF;
    clearScheme.foregroundDisabled = 0x808080FF;
    clearScheme.background = 0x0;
    clearScheme.backgroundInactive = 0xD6E3E7FF;
    clearScheme.backgroundDisabled = 0xC8D0D4FF;
    clearScheme.text = 0xFF;
    clearScheme.textHighlight = 0xFFFF;
    clearScheme.textHighlightText = 0xFFFFFFFF;
    clearScheme.textInactive = 0xD6E3E7FF;
    clearScheme.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&labelModeScheme1, GFX_COLOR_MODE_RGBA_8888);
    labelModeScheme1.base = 0xC8D0D4FF;
    labelModeScheme1.highlight = 0xC8D0D4FF;
    labelModeScheme1.highlightLight = 0xFFFFFFFF;
    labelModeScheme1.shadow = 0x808080FF;
    labelModeScheme1.shadowDark = 0x404040FF;
    labelModeScheme1.foreground = 0xFF;
    labelModeScheme1.foregroundInactive = 0xD6E3E7FF;
    labelModeScheme1.foregroundDisabled = 0x808080FF;
    labelModeScheme1.background = 0xFFFFFFFF;
    labelModeScheme1.backgroundInactive = 0xD6E3E7FF;
    labelModeScheme1.backgroundDisabled = 0xC8D0D4FF;
    labelModeScheme1.text = 0xFF0000FF;
    labelModeScheme1.textHighlight = 0xFFFF;
    labelModeScheme1.textHighlightText = 0xFFFFFFFF;
    labelModeScheme1.textInactive = 0xD6E3E7FF;
    labelModeScheme1.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&titleLabelScheme, GFX_COLOR_MODE_RGBA_8888);
    titleLabelScheme.base = 0xC8D0D4FF;
    titleLabelScheme.highlight = 0xC8D0D4FF;
    titleLabelScheme.highlightLight = 0xFFFFFFFF;
    titleLabelScheme.shadow = 0x808080FF;
    titleLabelScheme.shadowDark = 0x404040FF;
    titleLabelScheme.foreground = 0xFF;
    titleLabelScheme.foregroundInactive = 0xD6E3E7FF;
    titleLabelScheme.foregroundDisabled = 0x808080FF;
    titleLabelScheme.background = 0xFFFFFFFF;
    titleLabelScheme.backgroundInactive = 0xD6E3E7FF;
    titleLabelScheme.backgroundDisabled = 0xC8D0D4FF;
    titleLabelScheme.text = 0xE0E0E0FF;
    titleLabelScheme.textHighlight = 0xFFFF;
    titleLabelScheme.textHighlightText = 0xFFFFFFFF;
    titleLabelScheme.textInactive = 0xD6E3E7FF;
    titleLabelScheme.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&labelModeScheme0, GFX_COLOR_MODE_RGBA_8888);
    labelModeScheme0.base = 0xC8D0D4FF;
    labelModeScheme0.highlight = 0xC8D0D4FF;
    labelModeScheme0.highlightLight = 0xFFFFFFFF;
    labelModeScheme0.shadow = 0x808080FF;
    labelModeScheme0.shadowDark = 0x404040FF;
    labelModeScheme0.foreground = 0xFF;
    labelModeScheme0.foregroundInactive = 0xD6E3E7FF;
    labelModeScheme0.foregroundDisabled = 0x808080FF;
    labelModeScheme0.background = 0xFFFFFFFF;
    labelModeScheme0.backgroundInactive = 0xD6E3E7FF;
    labelModeScheme0.backgroundDisabled = 0xC8D0D4FF;
    labelModeScheme0.text = 0xFF00FF;
    labelModeScheme0.textHighlight = 0xFFFF;
    labelModeScheme0.textHighlightText = 0xFFFFFFFF;
    labelModeScheme0.textInactive = 0xD6E3E7FF;
    labelModeScheme0.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&labelModeScheme3, GFX_COLOR_MODE_RGBA_8888);
    labelModeScheme3.base = 0xC8D0D4FF;
    labelModeScheme3.highlight = 0xC8D0D4FF;
    labelModeScheme3.highlightLight = 0xFFFFFFFF;
    labelModeScheme3.shadow = 0x808080FF;
    labelModeScheme3.shadowDark = 0x404040FF;
    labelModeScheme3.foreground = 0xFF;
    labelModeScheme3.foregroundInactive = 0xD6E3E7FF;
    labelModeScheme3.foregroundDisabled = 0x808080FF;
    labelModeScheme3.background = 0xFFFFFFFF;
    labelModeScheme3.backgroundInactive = 0xD6E3E7FF;
    labelModeScheme3.backgroundDisabled = 0xC8D0D4FF;
    labelModeScheme3.text = 0xFFA100FF;
    labelModeScheme3.textHighlight = 0xFFFF;
    labelModeScheme3.textHighlightText = 0xFFFFFFFF;
    labelModeScheme3.textInactive = 0xD6E3E7FF;
    labelModeScheme3.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&GradientScheme, GFX_COLOR_MODE_RGBA_8888);
    GradientScheme.base = 0xC8D0D4FF;
    GradientScheme.highlight = 0xC8D0D4FF;
    GradientScheme.highlightLight = 0xFFFFFFFF;
    GradientScheme.shadow = 0x808080FF;
    GradientScheme.shadowDark = 0x404040FF;
    GradientScheme.foreground = 0xFF0000FF;
    GradientScheme.foregroundInactive = 0xFFFF00FF;
    GradientScheme.foregroundDisabled = 0x808080FF;
    GradientScheme.background = 0xFFFFFFFF;
    GradientScheme.backgroundInactive = 0xD6E3E7FF;
    GradientScheme.backgroundDisabled = 0xC8D0D4FF;
    GradientScheme.text = 0xFF;
    GradientScheme.textHighlight = 0xFFFF;
    GradientScheme.textHighlightText = 0xFFFFFFFF;
    GradientScheme.textInactive = 0xD6E3E7FF;
    GradientScheme.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&labelModeScheme2, GFX_COLOR_MODE_RGBA_8888);
    labelModeScheme2.base = 0xC8D0D4FF;
    labelModeScheme2.highlight = 0xC8D0D4FF;
    labelModeScheme2.highlightLight = 0xFFFFFFFF;
    labelModeScheme2.shadow = 0x808080FF;
    labelModeScheme2.shadowDark = 0x404040FF;
    labelModeScheme2.foreground = 0xFF;
    labelModeScheme2.foregroundInactive = 0xD6E3E7FF;
    labelModeScheme2.foregroundDisabled = 0x808080FF;
    labelModeScheme2.background = 0xFFFFFFFF;
    labelModeScheme2.backgroundInactive = 0xD6E3E7FF;
    labelModeScheme2.backgroundDisabled = 0xC8D0D4FF;
    labelModeScheme2.text = 0xFFFF00FF;
    labelModeScheme2.textHighlight = 0xFFFF;
    labelModeScheme2.textHighlightText = 0xFFFFFFFF;
    labelModeScheme2.textInactive = 0xD6E3E7FF;
    labelModeScheme2.textDisabled = 0x8C9294FF;

    laScheme_Initialize(&blackScheme, GFX_COLOR_MODE_RGBA_8888);
    blackScheme.base = 0xC8D0D4FF;
    blackScheme.highlight = 0xC8D0D4FF;
    blackScheme.highlightLight = 0xFFFFFFFF;
    blackScheme.shadow = 0x808080FF;
    blackScheme.shadowDark = 0x404040FF;
    blackScheme.foreground = 0xE0E0E0FF;
    blackScheme.foregroundInactive = 0xD6E3E7FF;
    blackScheme.foregroundDisabled = 0x808080FF;
    blackScheme.background = 0xFF;
    blackScheme.backgroundInactive = 0xD6E3E7FF;
    blackScheme.backgroundDisabled = 0xC8D0D4FF;
    blackScheme.text = 0xFF;
    blackScheme.textHighlight = 0xFFFF;
    blackScheme.textHighlightText = 0xFFFFFFFF;
    blackScheme.textInactive = 0xD6E3E7FF;
    blackScheme.textDisabled = 0x8C9294FF;

    GFX_Set(GFXF_DRAW_PIPELINE_MODE, GFX_PIPELINE_GCUGPU);

    // process images configured for preprocessing
    GFXU_PreprocessImage(&Bar,0xA9A34000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&audio_icons_01,0xA9DBB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&audio_icons_05,0xA9DCB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&audio_icons_06,0xA9DDB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&audio_icons_07,0xA9DEB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&portrait01,0xA9594000,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait02,0xA9614000,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait03,0xA9694000,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait07,0xA9714000,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait05,0xA9A7B180,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait04,0xA9ABB180,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&portrait06,0xA9AFB180,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);
    GFXU_PreprocessImage(&ConcertBackground,0xA8FB8000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&FireworksBackground,0xA912F000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&MoleculeBackground,0xA92A6000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&TouchBackground,0xA941D000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover1,0xA9B3B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover10,0xA9B7B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover2,0xA9BBB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover3,0xA9BFB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover4,0xA9C3B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover5,0xA9C7B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover6,0xA9CBB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover7,0xA9CFB180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover8,0xA9D3B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&cover9,0xA9D7B180,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card1,0xA9794000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card2,0xA9804000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card3,0xA9874000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card4,0xA98E4000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card5,0xA9954000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&card6,0xA99C4000,GFX_COLOR_MODE_RGBA_8888,GFX_FALSE);
    GFXU_PreprocessImage(&info_text,0xA8BB8000,GFX_COLOR_MODE_RGBA_8888,GFX_TRUE);

    laContext_SetStringTable(&stringTable);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_SplashScreen);
    laContext_AddScreen(screen);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_MainScreen);
    laContext_AddScreen(screen);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_InfoScreen);
    laContext_AddScreen(screen);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_AlbumScreen);
    laContext_AddScreen(screen);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_BusinessScreen);
    laContext_AddScreen(screen);

    screen = laScreen_New(LA_FALSE, LA_FALSE, &ScreenCreate_PortraitScreen);
    laContext_AddScreen(screen);

    laContext_SetActiveScreen(0);

	return 0;
}

static void ScreenCreate_SplashScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer0, &defaultScheme);
    laLayer_SetBufferCount(layer0, 2);
    laLayer_SetAlphaEnable(layer0, LA_TRUE);
    laLayer_SetAlphaAmount(layer0, 0xFF);
    laLayer_SetVSync(layer0, LA_FALSE);

    laScreen_SetLayer(screen, 0, layer0);

    ImageWidget1 = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget1, 221, 145);
    laWidget_SetSize((laWidget*)ImageWidget1, 372, 96);
    laWidget_SetBackgroundType((laWidget*)ImageWidget1, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget1, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget1, &PIC32Logo);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget1);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);
    laLayer_SetAlphaEnable(layer1, LA_TRUE);
    laLayer_SetAlphaAmount(layer1, 0xFF);
    laLayer_SetVSync(layer1, LA_FALSE);

    laScreen_SetLayer(screen, 1, layer1);

    ImageWidget3 = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget3, 800, 391);
    laWidget_SetSize((laWidget*)ImageWidget3, 800, 91);
    laWidget_SetBackgroundType((laWidget*)ImageWidget3, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget3, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget3, &Bar);
    laWidget_AddChild((laWidget*)layer1, (laWidget*)ImageWidget3);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);
    laLayer_SetAlphaEnable(layer2, LA_TRUE);
    laLayer_SetAlphaAmount(layer2, 0x0);
    laLayer_SetVSync(layer2, LA_FALSE);

    laScreen_SetLayer(screen, 2, layer2);

    ImageWidget2 = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget2, 249, 89);
    laWidget_SetSize((laWidget*)ImageWidget2, 307, 214);
    laWidget_SetBackgroundType((laWidget*)ImageWidget2, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget2, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget2, &HarmonyLogo);
    laWidget_AddChild((laWidget*)layer2, (laWidget*)ImageWidget2);

    ImageWidget4 = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget4, 18, 413);
    laWidget_SetSize((laWidget*)ImageWidget4, 202, 55);
    laWidget_SetBackgroundType((laWidget*)ImageWidget4, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget4, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget4, &MicrochipLogo);
    laWidget_AddChild((laWidget*)layer2, (laWidget*)ImageWidget4);

}

static void ScreenCreate_MainScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laLayer_SetBufferCount(layer0, 2);

    laScreen_SetLayer(screen, 0, layer0);

    ImageWidget = laImageWidget_New();
    laWidget_SetSize((laWidget*)ImageWidget, 800, 480);
    laWidget_SetBackgroundType((laWidget*)ImageWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget, &TouchBackground);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget);

    LabelWidget3 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)LabelWidget3, 560, 1);
    laWidget_SetSize((laWidget*)LabelWidget3, 240, 40);
    laWidget_SetScheme((laWidget*)LabelWidget3, &titleLabelScheme);
    laWidget_SetBackgroundType((laWidget*)LabelWidget3, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)LabelWidget3, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(LabelWidget3, laString_CreateFromID(string_Title));
    laLabelWidget_SetHAlignment(LabelWidget3, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)LabelWidget3);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);

    laScreen_SetLayer(screen, 1, layer1);

    RadialMenuWidget_Main = laRadialMenuWidget_New();
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Main, 50, 100);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Main, 700, 280);
    laWidget_SetScheme((laWidget*)RadialMenuWidget_Main, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Main, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)RadialMenuWidget_Main, LA_WIDGET_BORDER_NONE);
    laRadialMenuWidget_SetSizeScaling(RadialMenuWidget_Main, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetAlphaScaling(RadialMenuWidget_Main, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetSizeScaleMinMax(RadialMenuWidget_Main, 30, 100);
    laRadialMenuWidget_SetAlphaScaleMinMax(RadialMenuWidget_Main, 128, 255);
    laRadialMenuWidget_SetTheta(RadialMenuWidget_Main, 0);
    laRadialMenuWidget_SetTouchArea(RadialMenuWidget_Main, 0, 140, 700, 140);
    laRadialMenuWidget_SetDrawEllipse(RadialMenuWidget_Main, LA_TRUE);

    RadialMenuWidget_Main_Item0 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Main_Item0, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Main_Item0, &audio_icons_01);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Main_Item0, 128);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Main_Item0, 128);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Main_Item0, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Main_Item0, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Main_Item0, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Main_Item0, 400, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Main_Item0, 128, 128);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item0);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item0);

    RadialMenuWidget_Main_Item1 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Main_Item1, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Main_Item1, &audio_icons_06);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Main_Item1, 83);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Main_Item1, 83);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Main_Item1, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Main_Item1, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Main_Item1, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Main_Item1, 400, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Main_Item1, 128, 128);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item1);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item1);

    RadialMenuWidget_Main_Item2 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Main_Item2, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Main_Item2, &audio_icons_07);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Main_Item2, 38);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Main_Item2, 38);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Main_Item2, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Main_Item2, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Main_Item2, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Main_Item2, 400, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Main_Item2, 128, 128);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item2);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item2);

    RadialMenuWidget_Main_Item3 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Main_Item3, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Main_Item3, &audio_icons_05);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Main_Item3, 83);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Main_Item3, 83);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Main_Item3, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Main_Item3, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Main_Item3, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Main_Item3, 400, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Main_Item3, 128, 128);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item3);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Main, (laWidget*)RadialMenuWidget_Main_Item3);

    laRadialMenuWidget_SetItemSelectedEventCallback(RadialMenuWidget_Main, &RadialMenuWidget_Main_ItemSelectedEvent);
    laRadialMenuWidget_SetItemProminenceChangedEventCallback(RadialMenuWidget_Main, &RadialMenuWidget_Main_ItemProminenceChangedEvent);
    laRadialMenuWidget_SetNumberOfItemsShown(RadialMenuWidget_Main, 4);
    laWidget_AddChild((laWidget*)layer1, (laWidget*)RadialMenuWidget_Main);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);

    laScreen_SetLayer(screen, 2, layer2);

    InfoButton = laButtonWidget_New();
    laWidget_SetSize((laWidget*)InfoButton, 202, 55);
    laWidget_SetBackgroundType((laWidget*)InfoButton, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoButton, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(InfoButton, &MicrochipLogo);
    laButtonWidget_SetReleasedImage(InfoButton, &MicrochipLogo);
    laButtonWidget_SetImagePosition(InfoButton, LA_RELATIVE_POSITION_BEHIND);
    laButtonWidget_SetReleasedEventCallback(InfoButton, &InfoButton_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)InfoButton);

    ModeLabel = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)ModeLabel, 100, 380);
    laWidget_SetSize((laWidget*)ModeLabel, 600, 50);
    laWidget_SetScheme((laWidget*)ModeLabel, &labelModeScheme0);
    laWidget_SetBackgroundType((laWidget*)ModeLabel, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ModeLabel, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(ModeLabel, laString_CreateFromID(string_Mode1));
    laWidget_AddChild((laWidget*)layer2, (laWidget*)ModeLabel);

}

static void ScreenCreate_InfoScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laLayer_SetBufferCount(layer0, 2);

    laScreen_SetLayer(screen, 0, layer0);

    InfoPageHarmonyLogo = laImageWidget_New();
    laWidget_SetSize((laWidget*)InfoPageHarmonyLogo, 800, 480);
    laWidget_SetBackgroundType((laWidget*)InfoPageHarmonyLogo, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoPageHarmonyLogo, LA_WIDGET_BORDER_NONE);
    laWidget_SetAlphaEnable((laWidget*)InfoPageHarmonyLogo, GFX_TRUE);
    laWidget_SetAlphaAmount((laWidget*)InfoPageHarmonyLogo, 128);
    laImageWidget_SetImage(InfoPageHarmonyLogo, &HarmonyLogo);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)InfoPageHarmonyLogo);

    ImageWidget7 = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget7, 701, 210);
    laWidget_SetSize((laWidget*)ImageWidget7, 60, 72);
    laWidget_SetBackgroundType((laWidget*)ImageWidget7, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget7, LA_WIDGET_BORDER_NONE);
    laWidget_SetAlphaEnable((laWidget*)ImageWidget7, GFX_TRUE);
    laWidget_SetAlphaAmount((laWidget*)ImageWidget7, 128);
    laImageWidget_SetImage(ImageWidget7, &vertical_touch);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget7);

    ImageWidget = laImageWidget_New();
    laWidget_SetPosition((laWidget*)ImageWidget, 21, 62);
    laWidget_SetSize((laWidget*)ImageWidget, 100, 100);
    laWidget_SetBackgroundType((laWidget*)ImageWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);

    laScreen_SetLayer(screen, 1, layer1);

    InfoTextDragPanel = laWidget_New();
    laWidget_SetSize((laWidget*)InfoTextDragPanel, 800, 1000);
    laWidget_SetScheme((laWidget*)InfoTextDragPanel, &clearScheme);
    laWidget_SetBackgroundType((laWidget*)InfoTextDragPanel, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)InfoTextDragPanel, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer1, InfoTextDragPanel);

    InfoTextImage = laImageWidget_New();
    laWidget_SetPosition((laWidget*)InfoTextImage, 1, 51);
    laWidget_SetSize((laWidget*)InfoTextImage, 779, 509);
    laWidget_SetBackgroundType((laWidget*)InfoTextImage, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)InfoTextImage, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(InfoTextImage, &info_text);
    laImageWidget_SetHAlignment(InfoTextImage, LA_HALIGN_LEFT);
    laImageWidget_SetVAlignment(InfoTextImage, LA_VALIGN_TOP);
    laWidget_AddChild((laWidget*)InfoTextDragPanel, (laWidget*)InfoTextImage);

    PanelWidget1 = laWidget_New();
    laWidget_SetSize((laWidget*)PanelWidget1, 800, 50);
    laWidget_SetScheme((laWidget*)PanelWidget1, &clearScheme);
    laWidget_SetBackgroundType((laWidget*)PanelWidget1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetBorderType((laWidget*)PanelWidget1, LA_WIDGET_BORDER_NONE);
    laWidget_AddChild((laWidget*)layer1, PanelWidget1);

    TextTitle = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)TextTitle, 10, 0);
    laWidget_SetSize((laWidget*)TextTitle, 790, 50);
    laWidget_SetScheme((laWidget*)TextTitle, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)TextTitle, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)TextTitle, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(TextTitle, laString_CreateFromID(string_InfoTitle));
    laLabelWidget_SetHAlignment(TextTitle, LA_HALIGN_LEFT);
    laWidget_AddChild((laWidget*)PanelWidget1, (laWidget*)TextTitle);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);

    laScreen_SetLayer(screen, 2, layer2);

    ReturnToMainButton = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)ReturnToMainButton, 692, 380);
    laWidget_SetSize((laWidget*)ReturnToMainButton, 90, 90);
    laWidget_SetBackgroundType((laWidget*)ReturnToMainButton, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ReturnToMainButton, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ReturnToMainButton, &HomeButton);
    laButtonWidget_SetReleasedImage(ReturnToMainButton, &HomeButton);
    laButtonWidget_SetReleasedEventCallback(ReturnToMainButton, &ReturnToMainButton_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ReturnToMainButton);

    ButtonWidget = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)ButtonWidget, 693, 20);
    laWidget_SetSize((laWidget*)ButtonWidget, 90, 90);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget, &microchip_button);
    laButtonWidget_SetReleasedImage(ButtonWidget, &microchip_button);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget, &ButtonWidget_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget);

}

static void ScreenCreate_AlbumScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laLayer_SetBufferCount(layer0, 2);

    laScreen_SetLayer(screen, 0, layer0);

    ImageWidget = laImageWidget_New();
    laWidget_SetSize((laWidget*)ImageWidget, 800, 480);
    laWidget_SetBackgroundType((laWidget*)ImageWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget, &ConcertBackground);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget);

    LabelWidget = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)LabelWidget, 270, 50);
    laWidget_SetSize((laWidget*)LabelWidget, 240, 40);
    laWidget_SetScheme((laWidget*)LabelWidget, &titleLabelScheme);
    laWidget_SetBackgroundType((laWidget*)LabelWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)LabelWidget, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(LabelWidget, laString_CreateFromID(string_AlbumTitle));
    laWidget_AddChild((laWidget*)layer0, (laWidget*)LabelWidget);

    ButtonWidget4 = laButtonWidget_New();
    laWidget_SetSize((laWidget*)ButtonWidget4, 202, 55);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget4, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget4, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget4, &MicrochipLogo);
    laButtonWidget_SetReleasedImage(ButtonWidget4, &MicrochipLogo);
    laButtonWidget_SetImagePosition(ButtonWidget4, LA_RELATIVE_POSITION_BEHIND);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget4, &ButtonWidget4_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer0, (laWidget*)ButtonWidget4);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);

    laScreen_SetLayer(screen, 1, layer1);

    RadialMenuWidget_Album = laRadialMenuWidget_New();
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album, 1, 70);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album, 800, 300);
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)RadialMenuWidget_Album, LA_WIDGET_BORDER_NONE);
    laRadialMenuWidget_SetSizeScaling(RadialMenuWidget_Album, LA_RADIAL_MENU_SCALE_PROMINENT);
    laRadialMenuWidget_SetAlphaScaling(RadialMenuWidget_Album, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetSizeScaleMinMax(RadialMenuWidget_Album, 30, 100);
    laRadialMenuWidget_SetAlphaScaleMinMax(RadialMenuWidget_Album, 128, 255);
    laRadialMenuWidget_SetTheta(RadialMenuWidget_Album, 8);
    laRadialMenuWidget_SetTouchArea(RadialMenuWidget_Album, 0, 120, 800, 180);
    laRadialMenuWidget_SetEllipseType(RadialMenuWidget_Album, LA_RADIAL_MENU_ELLIPSE_TYPE_ORBITAL);

    RadialMenuWidget_Album_Item0 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item0, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item0, &cover1);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item0, 256);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item0, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item0, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item0, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item0, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item0, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item0, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item0);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item0);

    RadialMenuWidget_Album_Item1 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item1, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item1, &cover2);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item1, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item1, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item1, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item1, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item1, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item1, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item1, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item1);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item1);

    RadialMenuWidget_Album_Item2 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item2, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item2, &cover3);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item2, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item2, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item2, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item2, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item2, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item2, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item2, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item2);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item2);

    RadialMenuWidget_Album_Item3 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item3, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item3, &cover4);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item3, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item3, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item3, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item3, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item3, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item3, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item3, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item3);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item3);

    RadialMenuWidget_Album_Item4 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item4, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item4, &cover5);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item4, 256);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item4, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item4, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item4, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item4, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item4, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item4, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item4);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item4);

    RadialMenuWidget_Album_Item5 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item5, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item5, &cover6);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item5, 256);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item5, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item5, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item5, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item5, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item5, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item5, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item5);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item5);

    RadialMenuWidget_Album_Item6 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item6, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item6, &cover7);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item6, 256);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item6, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item6, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item6, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item6, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item6, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item6, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item6);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item6);

    RadialMenuWidget_Album_Item7 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item7, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item7, &cover8);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item7, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item7, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item7, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item7, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item7, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item7, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item7, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item7);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item7);

    RadialMenuWidget_Album_Item8 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item8, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item8, &cover9);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item8, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item8, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item8, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item8, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item8, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item8, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item8, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item8);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item8);

    RadialMenuWidget_Album_Item9 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Album_Item9, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Album_Item9, &cover10);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Album_Item9, 76);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Album_Item9, 76);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Album_Item9, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Album_Item9, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Album_Item9, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Album_Item9, 401, 220);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Album_Item9, 256, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item9);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Album, (laWidget*)RadialMenuWidget_Album_Item9);

    laRadialMenuWidget_SetNumberOfItemsShown(RadialMenuWidget_Album, 7);
    laWidget_AddChild((laWidget*)layer1, (laWidget*)RadialMenuWidget_Album);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);

    laScreen_SetLayer(screen, 2, layer2);

    ButtonWidget2 = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)ButtonWidget2, 710, 390);
    laWidget_SetSize((laWidget*)ButtonWidget2, 90, 90);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget2, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget2, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget2, &HomeButton);
    laButtonWidget_SetReleasedImage(ButtonWidget2, &HomeButton);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget2, &ButtonWidget2_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget2);

}

static void ScreenCreate_BusinessScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laLayer_SetBufferCount(layer0, 2);

    laScreen_SetLayer(screen, 0, layer0);

    ImageWidget = laImageWidget_New();
    laWidget_SetSize((laWidget*)ImageWidget, 800, 480);
    laWidget_SetBackgroundType((laWidget*)ImageWidget, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ImageWidget, LA_WIDGET_BORDER_NONE);
    laImageWidget_SetImage(ImageWidget, &MoleculeBackground);
    laWidget_AddChild((laWidget*)layer0, (laWidget*)ImageWidget);

    LabelWidget7 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)LabelWidget7, 560, 1);
    laWidget_SetSize((laWidget*)LabelWidget7, 240, 40);
    laWidget_SetScheme((laWidget*)LabelWidget7, &defaultScheme);
    laWidget_SetBackgroundType((laWidget*)LabelWidget7, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)LabelWidget7, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(LabelWidget7, laString_CreateFromID(string_RolodexTitle));
    laWidget_AddChild((laWidget*)layer0, (laWidget*)LabelWidget7);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);

    laScreen_SetLayer(screen, 1, layer1);

    RadialMenuWidget_Business = laRadialMenuWidget_New();
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business, 140, 0);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business, 549, 480);
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)RadialMenuWidget_Business, LA_WIDGET_BORDER_NONE);
    laRadialMenuWidget_SetSizeScaling(RadialMenuWidget_Business, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetAlphaScaling(RadialMenuWidget_Business, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetSizeScaleMinMax(RadialMenuWidget_Business, 1, 100);
    laRadialMenuWidget_SetAlphaScaleMinMax(RadialMenuWidget_Business, 128, 255);
    laRadialMenuWidget_SetTheta(RadialMenuWidget_Business, 90);
    laRadialMenuWidget_SetTouchArea(RadialMenuWidget_Business, 0, 0, 549, 480);
    laRadialMenuWidget_SetEllipseType(RadialMenuWidget_Business, LA_RADIAL_MENU_ELLIPSE_TYPE_ROLLODEX);

    RadialMenuWidget_Business_Item0 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item0, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item0, &card1);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item0, 448);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item0, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item0, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item0, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item0, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item0, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item0, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item0);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item0);

    RadialMenuWidget_Business_Item1 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item1, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item1, &card2);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item1, 268);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item1, 153);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item1, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item1, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item1, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item1, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item1, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item1);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item1);

    RadialMenuWidget_Business_Item2 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item2, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item2, &card3);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item2, 94);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item2, 53);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item2, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item2, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item2, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item2, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item2, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item2);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item2);

    RadialMenuWidget_Business_Item3 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item3, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item3, &card4);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item3, 448);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item3, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item3, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item3, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item3, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item3, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item3, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item3);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item3);

    RadialMenuWidget_Business_Item4 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item4, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item4, &card5);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item4, 94);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item4, 53);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item4, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item4, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item4, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item4, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item4, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item4);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item4);

    RadialMenuWidget_Business_Item5 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget_Business_Item5, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget_Business_Item5, &card6);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget_Business_Item5, 268);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget_Business_Item5, 153);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget_Business_Item5, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget_Business_Item5, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget_Business_Item5, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget_Business_Item5, 414, 240);
    laWidget_SetSize((laWidget*)RadialMenuWidget_Business_Item5, 448, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item5);
    laWidget_AddChild((laWidget*)RadialMenuWidget_Business, (laWidget*)RadialMenuWidget_Business_Item5);

    laRadialMenuWidget_SetNumberOfItemsShown(RadialMenuWidget_Business, 5);
    laWidget_AddChild((laWidget*)layer1, (laWidget*)RadialMenuWidget_Business);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);

    laScreen_SetLayer(screen, 2, layer2);

    ButtonWidget8 = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)ButtonWidget8, 710, 390);
    laWidget_SetSize((laWidget*)ButtonWidget8, 90, 90);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget8, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget8, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget8, &HomeButton);
    laButtonWidget_SetReleasedImage(ButtonWidget8, &HomeButton);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget8, &ButtonWidget8_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget8);

    ButtonWidget6 = laButtonWidget_New();
    laWidget_SetSize((laWidget*)ButtonWidget6, 202, 55);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget6, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget6, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget6, &MicrochipLogo);
    laButtonWidget_SetReleasedImage(ButtonWidget6, &MicrochipLogo);
    laButtonWidget_SetImagePosition(ButtonWidget6, LA_RELATIVE_POSITION_BEHIND);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget6, &ButtonWidget6_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget6);

}

static void ScreenCreate_PortraitScreen(laScreen* screen)
{
    laLayer* layer0;
    laLayer* layer1;
    laLayer* layer2;

    layer0 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer0, 0, 0);
    laWidget_SetSize((laWidget*)layer0, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer0, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer0, &blackScheme);
    laLayer_SetBufferCount(layer0, 2);

    laScreen_SetLayer(screen, 0, layer0);

    LabelWidget2 = laLabelWidget_New();
    laWidget_SetPosition((laWidget*)LabelWidget2, 560, 1);
    laWidget_SetSize((laWidget*)LabelWidget2, 240, 40);
    laWidget_SetScheme((laWidget*)LabelWidget2, &titleLabelScheme);
    laWidget_SetBackgroundType((laWidget*)LabelWidget2, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)LabelWidget2, LA_WIDGET_BORDER_NONE);
    laLabelWidget_SetText(LabelWidget2, laString_CreateFromID(string_PortraitTitle));
    laWidget_AddChild((laWidget*)layer0, (laWidget*)LabelWidget2);

    layer1 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer1, 0, 0);
    laWidget_SetSize((laWidget*)layer1, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer1, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer1, &clearScheme);
    laLayer_SetBufferCount(layer1, 2);

    laScreen_SetLayer(screen, 1, layer1);

    RadialMenuWidget4 = laRadialMenuWidget_New();
    laWidget_SetSize((laWidget*)RadialMenuWidget4, 800, 460);
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)RadialMenuWidget4, LA_WIDGET_BORDER_NONE);
    laRadialMenuWidget_SetSizeScaling(RadialMenuWidget4, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetAlphaScaling(RadialMenuWidget4, LA_RADIAL_MENU_SCALE_GRADUAL);
    laRadialMenuWidget_SetSizeScaleMinMax(RadialMenuWidget4, 30, 90);
    laRadialMenuWidget_SetAlphaScaleMinMax(RadialMenuWidget4, 128, 255);
    laRadialMenuWidget_SetTheta(RadialMenuWidget4, 0);
    laRadialMenuWidget_SetTouchArea(RadialMenuWidget4, 0, 230, 800, 230);

    RadialMenuWidget4_Item0 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item0, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item0, &portrait01);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item0, 299);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item0, 230);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item0, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item0, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item0, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item0, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item0, 333, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item0);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item0);

    RadialMenuWidget4_Item1 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item1, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item1, &portrait02);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item1, 185);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item1, 128);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item1, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item1, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item1, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item1, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item1, 371, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item1);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item1);

    RadialMenuWidget4_Item2 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item2, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item2, &portrait03);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item2, 459);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item2, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item2, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item2, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item2, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item2, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item2, 459, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item2);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item2);

    RadialMenuWidget4_Item3 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item3, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item3, &portrait04);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item3, 181);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item3, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item3, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item3, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item3, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item3, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item3, 181, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item3);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item3);

    RadialMenuWidget4_Item4 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item4, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item4, &portrait05);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item4, 190);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item4, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item4, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item4, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item4, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item4, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item4, 190, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item4);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item4);

    RadialMenuWidget4_Item5 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item5, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item5, &portrait06);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item5, 181);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item5, 256);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item5, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item5, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item5, LA_FALSE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item5, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item5, 181, 256);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item5);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item5);

    RadialMenuWidget4_Item6 = laImagePlusWidget_New();
    laWidget_SetBackgroundType((laWidget*)RadialMenuWidget4_Item6, LA_WIDGET_BACKGROUND_NONE);
    laImagePlusWidget_SetImage(RadialMenuWidget4_Item6, &portrait07);
    laImagePlusWidget_SetTransformWidth(RadialMenuWidget4_Item6, 128);
    laImagePlusWidget_SetTransformHeight(RadialMenuWidget4_Item6, 158);
    laImagePlusWidget_SetStretchEnabled(RadialMenuWidget4_Item6, LA_TRUE);
    laImagePlusWidget_SetPreserveAspectEnabled(RadialMenuWidget4_Item6, LA_TRUE);
    laWidget_SetVisible((laWidget*)RadialMenuWidget4_Item6, LA_TRUE);
    laWidget_SetPosition((laWidget*)RadialMenuWidget4_Item6, 400, 230);
    laWidget_SetSize((laWidget*)RadialMenuWidget4_Item6, 256, 316);
    laRadialMenuWidget_AddWidget(RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item6);
    laWidget_AddChild((laWidget*)RadialMenuWidget4, (laWidget*)RadialMenuWidget4_Item6);

    laRadialMenuWidget_SetNumberOfItemsShown(RadialMenuWidget4, 3);
    laWidget_AddChild((laWidget*)layer1, (laWidget*)RadialMenuWidget4);

    layer2 = laLayer_New();
    laWidget_SetPosition((laWidget*)layer2, 0, 0);
    laWidget_SetSize((laWidget*)layer2, 800, 480);
    laWidget_SetBackgroundType((laWidget*)layer2, LA_WIDGET_BACKGROUND_FILL);
    laWidget_SetScheme((laWidget*)layer2, &clearScheme);
    laLayer_SetBufferCount(layer2, 2);

    laScreen_SetLayer(screen, 2, layer2);

    ButtonWidget3 = laButtonWidget_New();
    laWidget_SetPosition((laWidget*)ButtonWidget3, 710, 390);
    laWidget_SetSize((laWidget*)ButtonWidget3, 90, 90);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget3, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget3, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget3, &HomeButton);
    laButtonWidget_SetReleasedImage(ButtonWidget3, &HomeButton);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget3, &ButtonWidget3_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget3);

    ButtonWidget1 = laButtonWidget_New();
    laWidget_SetSize((laWidget*)ButtonWidget1, 202, 55);
    laWidget_SetBackgroundType((laWidget*)ButtonWidget1, LA_WIDGET_BACKGROUND_NONE);
    laWidget_SetBorderType((laWidget*)ButtonWidget1, LA_WIDGET_BORDER_NONE);
    laButtonWidget_SetPressedImage(ButtonWidget1, &MicrochipLogo);
    laButtonWidget_SetReleasedImage(ButtonWidget1, &MicrochipLogo);
    laButtonWidget_SetImagePosition(ButtonWidget1, LA_RELATIVE_POSITION_BEHIND);
    laButtonWidget_SetReleasedEventCallback(ButtonWidget1, &ButtonWidget1_ReleasedEvent);

    laWidget_AddChild((laWidget*)layer2, (laWidget*)ButtonWidget1);

}



