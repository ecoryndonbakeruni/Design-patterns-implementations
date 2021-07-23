#ifndef LIONFACTORY_H
#define LIONFACTORY_H

#include <string>
#include <iostream>
#include "PredatorFactory.h"

using namespace std;

class LionFactory : public PredatorFactory
{
	private:
		
	public:
        LionFactory();
         ~LionFactory();
        virtual Predator* createPredator(string , string);
		
};
#endif