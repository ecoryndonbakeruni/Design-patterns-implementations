#include "PreyBackup.h"

PreyBackup::PreyBackup(int HP , string type ,int damage)
{
    this->HP = HP;
    this->type = type;
    this->damage = damage;
}
int PreyBackup::getHP()
{
    return this->HP;
}
string PreyBackup::getType()
{
    return this->type;
}
int PreyBackup::getDamage()
{
    return this->damage;
}