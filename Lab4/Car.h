#pragma once
//#include "Car_info.h"
//#include "Car_parameters.h"
#include <string>
#include <iostream>
using namespace std;
//using namespace CarInfo;
//using namespace CarParameters;

namespace carR {
    class Car// :public Car_info, public Car_parameters
    {
    public:
        int m;
        Car();
        Car(int);
        //Car();
        virtual int Get_wheal() = 0;
        virtual int Get_weight() = 0;
        virtual int Get_seat() = 0;
        virtual string Get_mark() = 0;
        virtual string Get_car_type() = 0;
    };

    class Car_avto:public Car
    {
    public:
        int Get_wheal();
        int Get_weight();
        int Get_seat();
        string Get_mark();
        string Get_car_type() ;
    };
    class Car_bus :public Car
    {
    public:
        int Get_wheal();
        int Get_weight();
        int Get_seat();
        string Get_mark();
        string Get_car_type();
    };
    class Car_truck :public Car
    {
    public:
        int Get_wheal();
        int Get_weight();
        int Get_seat();
        string Get_mark();
        string Get_car_type();
    };
}

