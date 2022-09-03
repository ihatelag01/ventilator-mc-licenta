#include <gui/secondscreen_screen/secondScreenView.hpp>
#include <gui/secondscreen_screen/secondScreenPresenter.hpp>

secondScreenPresenter::secondScreenPresenter(secondScreenView& v)
    : view(v)
{

}

void secondScreenPresenter::activate()
{

}

void secondScreenPresenter::deactivate()
{

}
void secondScreenPresenter::dataRxed()
{
	view.dataDisplay();

}
