#pragma once
#include "Car.h"
#include "Application.h"
#include "Car_info.h"
#include "Car_parameters.h"
#include <string>
using namespace std;
using namespace CarInfo;
using namespace CarParameters;
using namespace carR;
using namespace App;

namespace Sharing
{
    class SharingCar
    {
        
        private:
            struct cars
            {
                int year = 0;
                int price = 0;
                int CarRun = 0;
                string model = "0";
                string color = "0";
                Car *carType;
            };
            cars *CarList = new cars[10];
            int CarNum = 0;
            Application appList[10];
            int appNum = 0;

            
        public:
            SharingCar();
            //Методи
            void add_Car(int index, cars CarObj);
            void add_app(int index, Application appObj, bool newApp);

            void service(cars car[10], Application app[10]);
            void write(cars carWrite[10], Application appWrite[10]);
            void read();
            void randomMemory();
            //Перевантаження методи
            void Car_show();
            void Car_show(int index);

            void app_show();
            void app_show(int index);
            void check_if_ua_number(string number);

            void Service_Static();
            void Service_Dinamic();
        

    };
}
