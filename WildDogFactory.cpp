#include "WildDogFactory.h"

WildDogFactory::WildDogFactory()
{

}

WildDogFactory::~WildDogFactory()
{
    
}
/**
 * @brief generates the predator wilddog
 * 
 * @param huntingMethod the preferred hunting method of the predator
 * @param speciality the speciality of the predator
 * @return Predator* , a predator object
 */
Predator* WildDogFactory::createPredator(string huntingMethod, string speciality)
{
    return new WildDog(huntingMethod ,speciality);
}