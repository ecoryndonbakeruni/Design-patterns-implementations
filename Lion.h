#ifndef LION_H
#define LION_H

#include <string>
#include <iostream>
#include "Predator.h"

using namespace std;

class Lion : public Predator
{	
	public:
		Lion(string method ,string speciality);
		~Lion();
		virtual bool catchPrey(Prey* p);
		virtual bool getAttacked(Prey* p);
		virtual bool attack(Prey* p);
		virtual void die();
		virtual void speciality();
		
};
#endif