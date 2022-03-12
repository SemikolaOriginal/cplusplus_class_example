#ifndef __H_UDS_TIMESLOT_H__
#define __H_UDS_TIMESLOT_H__

#include "UDS_Core.h"

#include <string>

class Timeslot: public virtual Identificator {

public:
    Time start_time;
    Time end_time;
    string other_info;
    
    Class(unsigned int set_tsid) : Identificator{set_tsid}{}
    
}

#endif