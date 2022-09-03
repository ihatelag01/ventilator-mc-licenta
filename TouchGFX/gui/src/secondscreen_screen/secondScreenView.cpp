#include <gui/secondscreen_screen/secondScreenView.hpp>
#include <string.h>
extern char RX_BUFFER[10];
secondScreenView::secondScreenView()
{

}

void secondScreenView::setupScreen()
{
    secondScreenViewBase::setupScreen();
}

void secondScreenView::tearDownScreen()
{
    secondScreenViewBase::tearDownScreen();
}
void secondScreenView::dataDisplay()
{
	Unicode::strncpy(textArea1Buffer,RX_BUFFER,strlen(RX_BUFFER));
	textArea1.resizeToCurrentText();
	textArea1.invalidate();
	memset(RX_BUFFER,'\0',10);

}
