/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/secondscreen_screen/secondScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

secondScreenViewBase::secondScreenViewBase() :
    buttonCallback(this, &secondScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(0, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BLUE_BACKGROUNDS_MAIN_BG_PORTRAIT_TEXTURE_240X320PX_ID));

    textArea1.setXY(0, 0);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1Buffer[0] = 0;
    textArea1.setWildcard(textArea1Buffer);
    textArea1.resizeToCurrentText();
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_B8DK));

    buttonWithIcon1.setXY(35, 250);
    buttonWithIcon1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_HOME_48_ID));
    buttonWithIcon1.setIconXY(62, 8);
    buttonWithIcon1.setAction(buttonCallback);

    add(__background);
    add(image1);
    add(textArea1);
    add(buttonWithIcon1);
}

void secondScreenViewBase::setupScreen()
{

}

void secondScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithIcon1)
    {
        //Interaction1
        //When buttonWithIcon1 clicked change screen to mainScreen
        //Go to mainScreen with no screen transition
        application().gotomainScreenScreenNoTransition();
    }
}