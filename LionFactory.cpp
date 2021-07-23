#include "LionFactory.h"

LionFactory::LionFactory()
{

}

LionFactory::~LionFactory()
{
    
}
/**
 * @brief generates the predator lion
 * 
 * @param huntingMethod the preferred hunting method of the predator
 * @param speciality the speciality of the predator
 * @return Predator* , a predator object
 */
Predator* LionFactory::createPredator(string huntingMethod, string speciality)
{
    return new Lion(huntingMethod ,speciality);
}