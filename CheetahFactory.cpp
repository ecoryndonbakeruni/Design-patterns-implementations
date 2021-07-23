#include "CheetahFactory.h"

CheetahFactory::CheetahFactory()
{

}

CheetahFactory::~CheetahFactory()
{
    
}
/**
 * @brief generates the predator cheetah
 * 
 * @param huntingMethod the preferred hunting method of the predator
 * @param speciality the speciality of the predator
 * @return Predator* , a predator object
 */
Predator* CheetahFactory::createPredator(string huntingMethod, string speciality)
{
    return new Cheetah(huntingMethod ,speciality);
}