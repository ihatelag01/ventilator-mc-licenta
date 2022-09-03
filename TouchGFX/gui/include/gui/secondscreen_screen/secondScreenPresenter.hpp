#ifndef SECONDSCREENPRESENTER_HPP
#define SECONDSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class secondScreenView;

class secondScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    secondScreenPresenter(secondScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~secondScreenPresenter() {};
    virtual void dataRxed();
private:
    secondScreenPresenter();

    secondScreenView& view;
};

#endif // SECONDSCREENPRESENTER_HPP
