#include "UDS_Lists.h"

//---------------------------------------------------------------------

ListByOwner::ListByOwner(const Human* const setOwner){
    this->owner = (Human*)setOwner;
    this->list.clear();
}

//---------------------------------------------------------------------