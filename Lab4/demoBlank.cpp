#include "demoBlank.h"
#include <iostream>
#pragma execution_character_set( "utf-8" )

using namespace demoB;

demoBlank::demoBlank(int t, string f, string sN, string dOB) : Blank(t, f, sN, dOB)
{
    print_name();
    info_exist();
}
void demoBlank::print_all()
{
    cout << timeRent << endl;
    cout << firstName << endl;
    cout << scondName << endl;
    cout << dateOfBirth << endl;
}