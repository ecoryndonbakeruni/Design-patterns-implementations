#ifndef STORE_H
#define STORE_H

#include <string>
#include <iostream>
#include "PredatorBackup.h"

using namespace std;

class Store
{	
    private:
        PredatorBackup* momento;
	public:
        Store();
        ~Store();
		void StoreBackup(PredatorBackup* momento);
        PredatorBackup* getBackup();
        
		
};
#endif