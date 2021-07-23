#include "Store.h"

Store::Store()
{

}

Store::~Store()
{

}

PredatorBackup* Store::getBackup()
{
    return momento;
}

void Store::StoreBackup(PredatorBackup* momento)
{
    this->momento = momento;
}