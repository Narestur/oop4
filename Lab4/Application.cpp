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
    cout << endl << "����i�� ����� ��������:";
    cin >> number;
}
void Application::set_country_city()
{
    cout << "\n������ �����:";
    cin >> country;
    cout << "\n������ ����:";
    cin >> city;
}
bool Application::get_ua_number()
{
    return uaCountry;
}

//������������
void Application::get_number_country()
{
    string country = number.substr(0, 3);
    if (country == "380") uaCountry = true;
    else uaCountry = false;
}
void Application::get_number_country(string num)
{
    string country = num.substr(0, 3);
    cout << "\n����� �������� ����������: ";
    if (country == "380") cout << "���";
    else cout << "ͳ";
}
void Application::pring_additional_info()
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\n����� ��������: " << number;
    cout << "\n���������� �����: " << yesNo;
}
void Application::pring_additional_info(bool moreInfo)
{
    string yesNo;
    if (uaCountry) yesNo = "yes";
    else yesNo = "no";
    cout << "\n����� ��������: " << number;
    cout << "\n���������� �����: " << yesNo;
    cout << "\n�����" << country;
    cout << "\n̳���" << city;
}
void Application::print_info()
{
    cout << "\n������ �� ������� ������ ����: ��� ������, �'��, �������, ���� ����������. ����� ������� ����������� ����.";
}
void Application::damage_Car()
{
    dmgTheCar = true;
}