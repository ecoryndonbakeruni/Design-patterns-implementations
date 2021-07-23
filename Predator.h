#ifndef PREDATOR_H
#define PREDATOR_H

#include <string>
#include <iostream>
#include "Prey.h"
#include "PredatorBackup.h"

using namespace std;

class Predator 
{
	private:
		int HP;
		string method;
		int damage;
		string special;
		
	public:
		Predator();
		Predator(int HP, string method , int damage , string speciality);
		virtual ~Predator();
		int getHP();
		void setHP(int HP);
		string getMethod();
		void setMethod(string method);
		int getDamage();
		void setDamage(int damage);
		string getSpeciality();
		void setSpeciality(string speciality);
		void hunt(Prey* p);
		PredatorBackup* makeBackup();
		void Restore(PredatorBackup*);
		virtual bool catchPrey(Prey* p)=0;
		virtual bool getAttacked(Prey* p)=0;
		virtual bool attack(Prey* p)=0;
		virtual void die()=0;
		virtual void speciality()=0;
		
};
#endif