#ifndef PREDATORFACTORY_H
#define PREDATORFACTORY_H

#include <string>
#include <iostream>
#include "Predator.h"
#include "Lion.h"
#include "Wolf.h"
#include "Cheetah.h"
#include "WildDog.h"

using namespace std;

class PredatorFactory
{
	private:
		
	public:
        PredatorFactory();
        virtual ~PredatorFactory();
        virtual Predator* createPredator(string , string) = 0;
		
};
#endif