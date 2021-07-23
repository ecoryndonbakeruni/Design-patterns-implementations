#ifndef CHEETAHFACTORY_H
#define CHEETAHFACTORY_H

#include <string>
#include <iostream>
#include "PredatorFactory.h"

using namespace std;

class CheetahFactory : public PredatorFactory
{	
        public:
        CheetahFactory();
        ~CheetahFactory();
        virtual Predator* createPredator(string , string);	
};
#endif