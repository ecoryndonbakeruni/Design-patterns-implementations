#include "Predator.h"

Predator::Predator()
{
}
Predator::Predator(int HP, string method , int damage , string speciality)
{
	this->HP = HP;
	this->method = method;
	this->damage = damage;
	this->special = speciality;
}
Predator::~Predator()
{
}
int Predator::getHP()
{
	return this->HP;
}
void Predator::setHP(int HP)
{
	this->HP = HP;
}
string Predator::getMethod()
{
	return this->method;
}
void Predator::setMethod(string method)
{
	this->method = method;
}
int Predator::getDamage()
{
	return this->damage;
}
void Predator::setDamage(int damage)
{
	this->damage = damage;
}
string Predator::getSpeciality()
{
	return this->special;
}
void Predator::setSpeciality(string special)
{
	this->special = special;
}
void Predator::hunt(Prey* p)
{
	int attack = this->getDamage();
	while (this->HP >0 && p->getHP() >0)
	{
		if (this->HP < 5)
		{
			this->speciality();
		}
		if(this->catchPrey(p) == true)
		{
			if (this->getAttacked(p) == true)
			{
				this->die();
			}
			else
			{
				this->attack(p);
			}
		}
		else
		{
			this->setHP(this->HP-1);
		}
		
	}
	this->setDamage(attack);
}
PredatorBackup* Predator::makeBackup()
{
	return new PredatorBackup(this->HP , this->method , this->damage , this->special);
}

void Predator::Restore(PredatorBackup* memento)
{
	this->HP = memento->getHP();
	this->method = memento->getMethod();
	this->damage = memento->getDamage();
	this->special = memento->getSpeciality();
}