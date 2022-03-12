#ifndef __H_UDS_CORE_H__
#define __H_UDS_CORE_H__

#include <string>

using std::string;

class Identificator{

private:
    unsigned int id = 0; // Unique human identificator from database. Set by constructor only

public:

protected:
    Identificator();
    Identificator(unsigned int set_id);
    unsigned int getID();

};

class Date{

public:
    unsigned short int year;
    unsigned char month;
    unsigned char day;

    string getDate();

    Date(unsigned char set_day, 
             unsigned char set_month, 
             unsigned short int set_year);
    Date();

};

class Time{

public:
    unsigned char hours = 0;
    unsigned char minutes = 0;

    string getTime();

    Time(unsigned char set_hours, unsigned char set_minutes);
    
};

#endif