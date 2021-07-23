#include "Wolf.h"

Wolf::Wolf(string method ,string speciality)
{
	this->setHP(8);
	this->setMethod(method);
	this->setDamage(2);
	this->setSpeciality(speciality);
}
Wolf::~Wolf()
{
}
/**
 * @brief  The  predator  attempts  to  catch  the  prey  by  calling  the  Prey’srun method
 * 
 * @param p reference to the prey
 * @return true if prey is caught
 * @return false if prey was not caught
 */
bool Wolf::catchPrey(Prey* p)
{
	cout<<"The wolf sneaks up to the " << p->getType() <<endl;
	return p->run();
}
/**
 * @brief a predator is attacked through this function
 * 
 * @param p reference to the attacking prey
 * @return true if the predator dies
 * @return false if the predator survives
 */
bool Wolf::getAttacked(Prey* p)
{
	cout<<"The " << p->getType() << " spots the wolf,jumps onto it's back imposing " << p->getDamage() << " damage."<<endl;
	if (p->fight() > 0)
	{
		this->setHP(this->getHP() - p->getDamage());
		if (this->getHP() <= 0)
		{
			this->die();
			return true;
		}
	}
	return false;
}
/**
 * @brief the predator attacks the prey
 * 
 * @param p reference to the prey being attacked
 * @return true if the prey dies
 * @return false if the prey survives
 */
bool Wolf::attack(Prey* p)
{
	cout<<"The wolf's " << this->getMethod() << " caused " << this->getDamage() << " damage to the " << p->getType()<<endl;
	int health = p->takeDamage(this->getDamage());
	return health <= 0;
}
/**
 * @brief output for the death of a predator
 * 
 */
void Wolf::die()
{
	cout<<"Why so afraid of the big bad wolf?" <<endl;
}
/**
 * @brief handles the level up speciality of a predator
 * 
 */
void Wolf::speciality()
{
	cout<<"The wolf cunningly uses " << this->getSpeciality()<<endl;
	int damage = this->getDamage();
	this->setDamage(damage + damage*0.10);
}