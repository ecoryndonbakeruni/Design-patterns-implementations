#include "WildDog.h"

WildDog::WildDog(string method ,string speciality)
{
	this->setHP(11);
	this->setMethod(method);
	this->setDamage(4);
	this->setSpeciality(speciality);
}
WildDog::~WildDog()
{
}
/**
 * @brief  The  predator  attempts  to  catch  the  prey  by  calling  the  Prey’srun method
 * 
 * @param p reference to the prey
 * @return true if prey is caught
 * @return false if prey was not caught
 */
bool WildDog::catchPrey(Prey* p)
{
	cout<<"The wild dog howls as it measures up the " << p->getType()<<endl;
	return p->run();
}
/**
 * @brief a predator is attacked through this function
 * 
 * @param p reference to the attacking prey
 * @return true if the predator dies
 * @return false if the predator survives
 */
bool WildDog::getAttacked(Prey* p)
{
	cout<<"The " << p->getType() << " rams into the wild dog removing " << p->getDamage() << " health points."<<endl;
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
bool WildDog::attack(Prey* p)
{
	cout<<"The wild dog's " << this->getMethod() << " pays off leaving it's " << p->getType() << " with " << this->getDamage() << " health points less."<<endl;
	int health = p->takeDamage(this->getDamage());
	return health <= 0;
}
/**
 * @brief output for the death of a predator
 * 
 */
void WildDog::die()
{
	cout<<"No more hunting for this old dog."<<endl;
}
/**
 * @brief handles the level up speciality of a predator
 * 
 */
void WildDog::speciality()
{
	cout<<"The wild dog plays dead before using " << this->getSpeciality() << "."<<endl;
	int damage = this->getDamage();
	this->setDamage(damage + damage*0.10);
}