#include "WolfFactory.h"

WolfFactory::WolfFactory()
{

}

WolfFactory::~WolfFactory()
{
    
}
/**
 * @brief generates the predator wolf
 * 
 * @param huntingMethod the preferred hunting method of the predator
 * @param speciality the speciality of the predator
 * @return Predator* , a predator object
 */
Predator* WolfFactory::createPredator(string huntingMethod, string speciality)
{
    return new Wolf( huntingMethod ,speciality);
}