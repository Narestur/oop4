#pragma once
#include <iostream>
#include <string>
#include "Blank.h"


using namespace Blan;
using namespace std;

namespace App
{
    class Application :public Blank
    {
    private:
        time_t now = time(0);
        string dt = ctime(&now);
        string number = "380970617189";
        bool uaCountry;
        string country;
        string city;
        bool dmgTheCar = false;
    public:


        Application(int, string, string, string);
        Application();

        void show_data();
        void set_number();
        void set_country_city();
        bool get_ua_number();
        static void print_info();
        void damage_Car();

        //перевантажені
        void get_number_country();
        static void get_number_country(string num);
        void pring_additional_info();
        void pring_additional_info(bool moreInfo);
        
    };
}

