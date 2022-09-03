#ifndef SECONDSCREENVIEW_HPP
#define SECONDSCREENVIEW_HPP

#include <gui_generated/secondscreen_screen/secondScreenViewBase.hpp>
#include <gui/secondscreen_screen/secondScreenPresenter.hpp>

class secondScreenView : public secondScreenViewBase
{
public:
    secondScreenView();
    virtual ~secondScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void dataDisplay();
protected:
};

#endif // SECONDSCREENVIEW_HPP
