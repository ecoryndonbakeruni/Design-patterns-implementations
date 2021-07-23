#include "PredatorBackup.h"

PredatorBackup::PredatorBackup(int HP , string method ,int damage , string speciality)
{
    this->HP = HP;
    this->method = method;
    this->damage = damage;
    this->special = speciality;
}
int PredatorBackup::getHP()
{
    return this->HP;
}
string PredatorBackup::getMethod()
{
    return this->method;
}
int PredatorBackup::getDamage()
{
    return this->damage;
}
string PredatorBackup::getSpeciality()
{
    return this->special;
}