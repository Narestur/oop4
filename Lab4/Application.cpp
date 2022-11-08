#include "Application.h"
using namespace App;
#pragma execution_character_set( "utf-8" )
Application::Application(int t, string f, string sN, string dOB) :Blank(t, f, sN, dOB)
{
    timeRent = t;
    firstName = f;
    scondName = sN;
    dateOfBirth = dOB;
    //cout << t << endl;
}

Application::Application() :Blank()
{
    //cout << "empty" << endl; 
}

//Application(const Application &a) :timeRent(200), firstName("f"), scondName("sN"), dateOfBirth("dOB") {}
void Application::show_data()
{
    cout << dt;
}
void Application::set_number()
{
    cout << endl << "Введiть номер телефону:";
    cin >> number;
}
void Application::set_country_city()
{
    cout << "\nВведіть країну:";
    cin >> country;
    cout << "\nВведіть місто:";
    cin >> city;
}
bool Application::get_ua_number()
{
    return uaCountry;
}

//перевантажені
void Application::get_number_country()
{
    string country = number.substr(0, 3);
    if (country == "380") uaCountry = true;
    else uaCountry = false;
}
void Application::get_number_country(string num)
{
    string country = num.substr(0, 3);
    cout << "\nНомер телефону український: ";
    if (country == "380") cout << "Так";
    else cout << "Ні";
}
void Application::pring_additional_info()
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\nНомер телефону: " << number;
    cout << "\nУкраїнський номер: " << yesNo;
}
void Application::pring_additional_info(bool moreInfo)
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\nНомер телефону: " << number;
    cout << "\nУкраїнський номер: " << yesNo;
    cout << "\nКраїна" << country;
    cout << "\nМісто" << city;
}
void Application::print_info()
{
    cout << "\nЗаявка має наступні основні поля: час оренди, і'мя, прізвище, дата народження. Також присутні необовязкові поля.";
}
void Application::damage_Car()
{
    dmgTheCar = true;
}