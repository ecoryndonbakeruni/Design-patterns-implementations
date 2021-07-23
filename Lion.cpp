#include "Lion.h"
Lion::Lion(string method ,string speciality)
{
	this->setHP(13);
	this->setMethod(method);
	this->setDamage(5);
	this->setSpeciality(speciality);
}

Lion::~Lion()
{

}
/**
 * @brief  The  predator  attempts  to  catch  the  prey  by  calling  the  Prey’srun method
 * 
 * @param p reference to the prey
 * @return true if prey is caught
 * @return false if prey was not caught
 */
bool Lion::catchPrey(Prey* p)
{
	cout<<"The lion pounces into action to catch the " << p->getType() << "."<<endl;
	return p->run();
}
/**
 * @brief a predator is attacked through this function
 * 
 * @param p reference to the attacking prey
 * @return true if the predator dies
 * @return false if the predator survives
 */
bool Lion::getAttacked(Prey* p)
{
	cout <<"The " << p->getType() << " stands on the lions tail inflicting " << p->getDamage() << " damage!"<<endl;
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
bool Lion::attack(Prey* p)
{
	cout<<"The lion uses " << this->getMethod() <<" to inflict " << this->getDamage() << " damage on the " << p->getType() <<endl;
	int health = p->takeDamage(this->getDamage());
	return health <= 0;
}
/**
 * @brief output for the death of a predator
 * 
 */
void Lion::die()
{
	cout<<"Long lived the king."<<endl;
}
/**
 * @brief handles the level up speciality of a predator
 * 
 */
void Lion::speciality()
{
	cout<<"The injured lion uses " << this->getSpeciality()<<endl;
	int damage = this->getDamage();
	this->setDamage(damage + damage*0.10);
}