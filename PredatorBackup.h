#ifndef PREDATORBACKUP_H
#define PREDATORBACKUP_H

#include <string>
#include <iostream>

using namespace std;

class PredatorBackup
{	private:
        int HP;
        string method;
        int damage;
        string special;
	public:
		PredatorBackup(int HP , string method ,int damage , string speciality);
        int getHP();
        string getMethod();
        int getDamage();
        string getSpeciality();
		
};
#endif