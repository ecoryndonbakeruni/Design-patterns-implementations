#include "Cheetah.h"

Cheetah::Cheetah(string method ,string speciality)
{
	this->setHP(11);
	this->setMethod(method);
	this->setDamage(4);
	this->setSpeciality(speciality);
}

Cheetah::~Cheetah()
{
}
/**
 * @brief  The  predator  attempts  to  catch  the  prey  by  calling  the  Prey’srun method
 * 
 * @param p reference to the prey
 * @return true if prey is caught
 * @return false if prey was not caught
 */
bool Cheetah::catchPrey(Prey* p)
{
	cout<<"The cheetah sprints forward with its eye on the " << p->getType() <<endl;
	return p->run();
}
/**
 * @brief a predator is attacked through this function
 * 
 * @param p reference to the attacking prey
 * @return true if the predator dies
 * @return false if the predator survives
 */
bool Cheetah::getAttacked(Prey* p)
{
	cout<<"The "<< p->getType() << " side steps the cheetah,kicks back and cause "<< p->getDamage() << " damage in the process."<<endl;
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
bool Cheetah::attack(Prey* p)
{
	cout<<"The cheetah causes " << this->getDamage() << " damage to the " << p->getType() << " by using " << this->getMethod()<<endl;
	int health = p->takeDamage(this->getDamage());
	return health <= 0;
}
/**
 * @brief output for the death of a predator
 * 
 */
void Cheetah::die()
{
	cout<<"The hunter becomes the hunted." <<endl;
}
/**
 * @brief handles the level up speciality of a predator
 * 
 */
void Cheetah::speciality()
{
	cout<<"The tired cheetah uses " << this->getSpeciality() <<"."<<endl;
	int damage = this->getDamage();
	this->setDamage(damage + damage*0.10);
}