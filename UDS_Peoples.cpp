#include "UDS_Peoples.h"

#include <iomanip>
#include <sstream>

using std::stringstream;
using std::endl;

//---------------------------------------------------------------------

string NSP::getFullname(){
    return (this->surname + ' ' + this->name + ' ' + this->patronymic);
}

bool NSP::isWithoutPatronymic(){
    return this->patronymic.empty();
}

NSP::NSP(string set_name, 
        string set_surname,
        string set_patronymic){
    this->name = set_name;
    this->surname = set_surname;
    this->patronymic = set_patronymic;
}

NSP::NSP(){}

//---------------------------------------------------------------------

void Gender::setGender(GENDER_STATES set_gender){
    if(this->gender == NOT_SET)
        this->gender = set_gender;
}

Gender::Gender(){
    this->gender = NOT_SET;
}

Gender::Gender(GENDER_STATES set_gender){
    this->gender = set_gender;
}

//---------------------------------------------------------------------

string Human::getInfo(){
    stringstream result;
    result << "hid: " << this->getID() << endl <<
    "NSP: " << this->getFullname() << endl <<
    "Birthdate: " << this->birthdate.getDate() << endl <<
    "Gender: ";

    if(this->gender != NOT_SET)
        result << static_cast<char>(this->gender) << endl;
    else 
        result << "n.s." << endl;
    
    result << "Parent1: ";
    if(this->parent1 != nullptr)
        result << this->parent1->getFullname() << endl;
    else
        result << "n.s." << endl;
    
    result << "Parent2: ";
    if(this->parent2 != nullptr)
        result << this->parent2->getFullname() << endl;
    else
        result << "n.s." << endl;

    return result.str();
}

void Human::setParent1(const Human* const parentHuman){
    this->parent1 = (Human*)parentHuman;
}
void Human::setParent2(const Human* const parentHuman){
    this->parent2 = (Human*)parentHuman;
}

//---------------------------------------------------------------------

