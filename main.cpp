#include <assert.h>
#include "Prey.h"
#include "Lion.h"
#include "Cheetah.h"
#include "Wolf.h"
#include "WildDog.h"
#include "LionFactory.h"
#include "CheetahFactory.h"
#include "WolfFactory.h"
#include "WildDogFactory.h"
#include "PreyStore.h"
#include "Store.h"
#include "PredatorBackup.h"
#include "PreyBackup.h"
//-----------------------
#include "Prey.cpp"
#include "Lion.cpp"
#include "Cheetah.cpp"
#include "Wolf.cpp"
#include "WildDog.cpp"
#include "LionFactory.cpp"
#include "CheetahFactory.cpp"
#include "WolfFactory.cpp"
#include "WildDogFactory.cpp"
#include "Predator.cpp"
#include "PredatorFactory.cpp"
#include "PreyStore.cpp"
#include "Store.cpp"
#include "PredatorBackup.cpp"

int main()
{
    //create the participants in the hunt
    Predator **p = new Predator *[4];
    Prey** preyArray = new Prey*[2];
    PredatorFactory **pf = new PredatorFactory *[4];
    pf[0] = new LionFactory();
    pf[1] = new CheetahFactory();
    pf[2] = new WolfFactory();
    pf[3] = new WildDogFactory();

    //create the memento
    PreyStore PreyCareTaker;
    Store PredatoreCareTaker;
    PreyBackup* PreyProd;
    PredatorBackup* PredatorProd;

    preyArray[0] = new Prey(15, "springBok", 10);
    preyArray[1] = new Prey(11, "buffalo", 6);

    p[0] = pf[0]->createPredator("Lions Hunting Method", "Lions Speciality");
    p[1] = pf[1]->createPredator("Cheetah Hunting Method", "Cheetah Speciality");
    p[2] = pf[2]->createPredator("Wolf Hunting Method", "Wolf Speciality");
    p[3] = pf[3]->createPredator("WildDog Hunting Method", "WildDog Speciality");

    cout<< "**********************Let the games begin********************************"<<endl;
    string arr[8];
    int count=0;

    for (int ik=0 ; ik < 4 ; ik++) //run through all predators
    {
        //store the predator
        PredatoreCareTaker.StoreBackup(p[ik]->makeBackup());
        for (int ij=0 ; ij < 2 ; ij++)                              //run through all prey
        {
            //store the prey
            PreyCareTaker.StoreBackup(preyArray[ij]->makeBackup());
            p[ik]->hunt(preyArray[ij]); 
             cout << (p[0]->getHP() > 0 ? "Predator Wins" : "Prey Wins") << endl;
             if (p[0]->getHP() > 0)
             {
                 arr[count++] = "Predator Won";
             }
             else
             {
                 arr[count++] = "Prey Won";
             }
             
            p[ik]->Restore(PredatoreCareTaker.getBackup());
            preyArray[ij]->Restore(PreyCareTaker.getBackup());
        }
    }
 cout<< "**********************And thats a hunt*******************************"<<endl;

   cout<<"-----result summary-----"<<endl;
   for (int ik=0; ik < 8 ; ik++)
   {
       cout<<"Round " << ik+1 << " : " << arr[ik] << endl;
   }

    for (int ik=0 ; ik < 4 ; ik++)
    {
        delete p[ik];
        delete pf[ik];
        p[ik] = nullptr;
        pf[ik] = nullptr;
    }

    for (int ik=0 ; ik < 2 ; ik++)
    {
        delete preyArray[ik];
        preyArray[ik] = nullptr;
    }

    delete[] p;
    delete[] preyArray;
    delete[] pf;
    cout << endl;
     cout<< "**********************passed task 4********************************"<<endl;

    return 0;
}