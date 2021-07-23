#ifndef WILDDOG_H
#define WILDDOG_H

#include <string>
#include <iostream>
#include "Predator.h"

using namespace std;

class WildDog : public Predator
{
	public:
		WildDog(string method ,string speciality);
		~WildDog();
		virtual bool catchPrey(Prey* p);
		virtual bool getAttacked(Prey* p);
		virtual bool attack(Prey* p);
		virtual void die();
		virtual void speciality();
		
};
#endif