#include "Blank.h"
#include <iostream>
#pragma execution_character_set( "utf-8" )

using namespace std;
using namespace Blan;

Blank::Blank(int t, string f, string sN, string dOB) {
    timeRent = t;
    firstName = f;
    scondName = sN;
    dateOfBirth = dOB;
    allInfoReady = true;
}
Blank::Blank()
{
    allInfoReady = false;

}

void Blank::setOld()
{
    itNew = false;
}
void Blank::replace(Blank blank)
{
    timeRent = blank.timeRent;
    firstName = blank.firstName;
    scondName = blank.scondName;
    dateOfBirth = blank.dateOfBirth;
}
bool Blank::get_new()
{
    return itNew;
}
Blank Blank::return_blank(Blank returnB)
{
    return returnB;
}

void Blank::info_exist()
{
    cout << allInfoReady << endl;
}
void Blank::info_exist(bool showAllInfo)
{
    if (allInfoReady)
    {
        cout << timeRent << endl;
        cout << firstName << endl;
        cout << scondName << endl;
        cout << dateOfBirth << endl;
    }
}
void Blank::print_name()
{
    cout << "\nЗаявка подана людиною:" << firstName << endl;
}
void Blank::print_name(bool sn)
{
    cout << "\nЗаявка подана людиною:" << firstName << " " << scondName << endl;
}
