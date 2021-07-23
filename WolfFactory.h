#ifndef WOLFFACTORY_H
#define WOLFFACTORY_H

#include <string>
#include <iostream>
#include "PredatorFactory.h"

using namespace std;

class WolfFactory : public PredatorFactory
{
	private:
		
	public:
        WolfFactory();
         ~WolfFactory();
        virtual Predator* createPredator(string , string);
		
};
#endif