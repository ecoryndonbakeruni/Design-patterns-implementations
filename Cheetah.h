#ifndef CHEETAH_H
#define CHEETAH_H

#include <string>
#include <iostream>
#include "Predator.h"

using namespace std;

class Cheetah : public Predator
{	
	public:
		Cheetah(string method ,string speciality);
		~Cheetah();
		virtual bool catchPrey(Prey* p);
		virtual bool getAttacked(Prey* p);
		virtual bool attack(Prey* p);
		virtual void die();
		virtual void speciality();
		
};
#endif