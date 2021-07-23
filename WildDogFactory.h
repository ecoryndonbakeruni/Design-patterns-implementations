#ifndef WILDDOGFACTORY_H
#define WILDDOGFACTORY_H

#include <string>
#include <iostream>
#include "PredatorFactory.h"

using namespace std;

class WildDogFactory : public PredatorFactory
{
	private:
		
	public:
        WildDogFactory();
         ~WildDogFactory();
        virtual Predator* createPredator(string , string);
		
};
#endif