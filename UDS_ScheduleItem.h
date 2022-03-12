#ifndef __H_UDS_SI_H__
#define __H_UDS_SI_H__

#include "UDS_Core.h"
#include "UDS_Timeslot.h"
#include "UDS_Peoples.h"
#include "UDS_Classes.h"
#include "UDS_Subjects.h"

class ScheduleItem: 
    public virtual Identificator,
    public Date{

public:
    unsigned int classroom = 0;

    Timeslot* timeslot = nullptr;
    Human* teacher = nullptr;
    Class* group = nullptr;
    Subject* subject = nullptr;

    Class(unsigned int set_idx) : Identificator{set_idx}{}
    
}

#endif