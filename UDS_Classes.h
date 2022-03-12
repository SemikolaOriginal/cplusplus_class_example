#ifndef __H_UDS_C_H__
#define __H_UDS_C_H__

#include "UDS_Core.h"
#include "UDS_Peoples.h"

class Class: public virtual Identificator{

public:
    unsigned char design_number = 0;
    unsigned char design_symbol = 0;
    Human* classroomteacher = nullptr;

    Class(unsigned int set_cid) : Identificator{set_cid}{}

};

#endif