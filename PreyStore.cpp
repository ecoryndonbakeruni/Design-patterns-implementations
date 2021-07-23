#include "PreyStore.h"

PreyStore::PreyStore()
{

}

PreyStore::~PreyStore()
{

}

PreyBackup* PreyStore::getBackup()
{
    return momento;
}

void PreyStore::StoreBackup(PreyBackup* momento)
{
    this->momento = momento;
}