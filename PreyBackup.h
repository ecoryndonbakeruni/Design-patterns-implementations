#ifndef PREYBACKUP_H
#define PREYBACKUP_H

#include <string>
#include <iostream>

using namespace std;

class PreyBackup
{	private:
        int HP;
        string type;
        int damage;
	public:
		//Lion();
		PreyBackup(int HP , string type ,int damage);
        int getHP();
        string getType();
        int getDamage();
		
};
#endif