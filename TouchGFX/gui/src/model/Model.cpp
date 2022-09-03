#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"
#include "cmsis_os.h"
extern int isDataRX;
Model::Model() : modelListener(0)
{

}

void Model::tick()
{
    if(isDataRX == 1)
    {
    	modelListener->dataRxed();
    	isDataRX = 0;
    }
}
