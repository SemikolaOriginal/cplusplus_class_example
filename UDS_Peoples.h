#ifndef __H_UDS_P_H__
#define __H_UDS_P_H__

#include "UDS_Core.h"

#include <vector>

using std::vector;


class NSP{

public:
    string name;
    string surname;
    string patronymic;

    NSP(string set_name, 
        string set_surname,
        string set_patronymic);
    NSP();

protected:

    string getFullname();

    bool isWithoutPatronymic();

};

class Gender{
public:
    enum GENDER_STATES{
        NOT_SET = 0,
        MALE = 'M',
        FEMALE = 'F'
    };
    void setGender(GENDER_STATES set_gender);

    Gender();
    Gender(GENDER_STATES set_gender);

protected:
    GENDER_STATES gender = NOT_SET;
};

class Human: public virtual Identificator, 
             public NSP,
             public Gender{

private:
    Human* parent1 = nullptr;
    Human* parent2 = nullptr;

public:
    Date birthdate;

    string getInfo();
    void setParent1(const Human* const parentHuman);
    void setParent2(const Human* const parentHuman);
    
    Human(unsigned int set_hid) : Identificator{set_hid}{}
};

#endif