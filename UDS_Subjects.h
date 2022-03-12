#ifndef __H_UDS_S_H__
#define __H_UDS_S_H__

#include "UDS_Core.h"

class Subject: public virtual Identificator{

public:
    string name;
    string other_info;

    Subject(unsigned int set_sid) : Identificator{set_sid}{}
    
};

#endif