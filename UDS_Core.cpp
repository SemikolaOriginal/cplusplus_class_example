#include "UDS_Core.h"

#include <iomanip>
#include <sstream>

using std::stringstream;
using std::endl;

//---------------------------------------------------------------------

unsigned int Identificator::getID(){
    return this->id;
}

Identificator::Identificator(unsigned int set_id){
    this->id = set_id;
}

//---------------------------------------------------------------------

string Date::getDate(){
    stringstream result;
    result << std::setfill('0') << std::setw(2) << std::to_string(this->day) << 
    '.' << 
    std::setw(2) << std::to_string(this->month) << 
    '.' <<
    std::setw(4) << std::to_string(this->year);

    return result.str();
}

Date::Date(unsigned char set_day, 
           unsigned char set_month, 
           unsigned short int set_year){
    this->day = set_day;
    this->month = set_month;
    this->year = set_year;
}

Date::Date(){
    this->day = 0;
    this->month = 0;
    this->year = 0;
}

//---------------------------------------------------------------------
Time::getTime(){
    stringstream result;
    result << std::setfill('0') << std::setw(2) << std::to_string(this->hours) << 
    ':' << 
    std::setw(2) << std::to_string(this->minutes);
    return result.str();
}


Time::Time(unsigned char set_hours, unsigned char set_minutes){
    if(set_hours < 24 && set_minutes < 60){
        this->hours = set_hours;
        this->minutes = set_minutes;
    }
}

//---------------------------------------------------------------------
