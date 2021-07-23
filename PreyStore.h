#ifndef PREYSTORE_H
#define PREYSTORE_H

#include <string>
#include <iostream>
#include "PreyBackup.h"

using namespace std;

class PreyStore
{	
    private:
        PreyBackup* momento;
	public:
        PreyStore();
        ~PreyStore();
		void StoreBackup(PreyBackup* momento);
        PreyBackup* getBackup();
        
		
};
#endif