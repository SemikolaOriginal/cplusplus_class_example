#ifndef __H_UDS_L_H__
#define __H_UDS_L_H__

#include "UDS_Peoples.h"
#include "UDS_Peoples.h"
#include "UDS_Classes.h"
#include "UDS_Subjects.h"

#include <string>
#include <vector>

using std::string;
using std::vector;


class ListByOwner{

public:
    const Human* owner;
    vector<string> list;
    ListByOwner(const Human* const setOwner);

};

struct ClassAndHuman{
    Class* cid = nullptr;
    Human* hid = nullptr;
};

struct SubjectAndHuman{
    Subject* sid = nullptr;
    Human* hid = nullptr;
};

struct ClassAndSubject{
    Class* cid = nullptr;
    Subject* sid = nullptr;
};

#endif