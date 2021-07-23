#include "Prey.h"

Prey::Prey()
{
    cout << "Prey Created." << endl;
}

Prey::Prey(int HP, string type, int damage)
{
    srand(0);
    cout << "Prey Created." << endl;
    this->setHP(HP);
    this->setType(type);
    this->setDamage(damage);
}

Prey::~Prey()
{
    cout << "Prey Destroyed." << endl;
}

Prey *Prey::clone()
{
    return new Prey(this->HP , this->type , this->damage);
}

int Prey::getHP()
{
    return this->HP;
}

void Prey::setHP(int HP)
{
    this->HP = HP;
}

string Prey::getType()
{
    return this->type;
}

void Prey::setType(string type)
{
    this->type = type;
}

int Prey::getDamage()
{
    return this->damage;
}

void Prey::setDamage(int damage)
{
    this->damage = damage;
}
/**
 * @brief when the prey is being hunted by a predator, a random true\false value will be generated
 * 
 * @return true if the prey is caught
 * @return false if the prey escapes
 */
bool Prey::run()
{
    return ((rand() % 100) + 1) > 50;
}
/**
 * @brief the prey is forced into a fight
 * 
 * @return int the damage inflicted by the prey
 */
int Prey::fight()
{
    if ((rand() % 100 + 1) > 80)
        return this->getDamage();
    return 0;
}
/**
 * @brief when the prey gets injured the HP is decreased by the damage
 * 
 * @param damage the damage inflicted by the predator
 * @return int the remaining health of the prey
 */
int Prey::takeDamage(int damage)
{
    this->setHP(this->getHP() - damage);
    return this->getHP();
}
/**
 * @brief Method for cloning the current prey, for memento pattern
 * 
 * @return PreyBackup* returns the prey clone
 */
PreyBackup* Prey::makeBackup()
{
    return new PreyBackup(this->HP , this->type, this->damage);
}
/**
 * @brief restores a stored prey backup, for memento pattern
 * 
 * @param memento the stored prey clone
 */
void Prey::Restore(PreyBackup* memento)
{
    this->HP = memento->getHP();
    this->type= memento->getType();
    this->damage = memento->getDamage();
}