#ifndef WOLF_H
#define WOLF_H

#include <string>
#include <iostream>
#include "Predator.h"

using namespace std;

class Wolf : public Predator
{
		
	public:
		Wolf(string method ,string speciality);
		~Wolf();
		virtual bool catchPrey(Prey* p);
		virtual bool getAttacked(Prey* p);
		virtual bool attack(Prey* p);
		virtual void die();
		virtual void speciality();
		
};
#endif