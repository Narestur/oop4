#include "SharingCar.h"
#include "Application.h"
#include "Car.h"
#include <iostream>
#include <Windows.h>
#include <ctime>
#include <random>
#include <fstream>
#include <algorithm>
#pragma execution_character_set( "utf-8" )

using namespace Sharing;
using namespace App;
using namespace carR;

int getRandom(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}


int comp1(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

SharingCar::SharingCar()
{   
    //string sAll = "";
    for (int i = 0; i < 10; i++)
    {
        Car *type;
        
        switch (getRandom(1, 3))
        {
        case 1: type = new Car_avto;
            break;
        case 2: type = new Car_bus;
            break;
        case 3: type = new Car_truck;
            break;
        default: type = new Car_avto;
        }
        
       char l[10];
        for (int i2 = 0; i2 < 10; i2++)
        {
            int p = getRandom(1, 26);
            switch (p) {
            case 1: l[i2] = 'q';
                break;
            case 2: l[i2] = 'w';
                break;
            case 3: l[i2] = 'e';
                break;
            case 4: l[i2] = 'r';
                break;
            case 5: l[i2] = 't';
                break;
            case 6: l[i2] = 'y';
                break;
            case 7: l[i2] = 'u';
                break;
            case 8: l[i2] = 'i';
                break;
            case 9: l[i2] = 'o';
                break;
            case 10: l[i2] = 'p';
                break;
            case 11: l[i2] = 'a';
                break;
            case 12: l[i2] = 's';
                break;
            case 13: l[i2] = 'd';
                break;
            case 14: l[i2] = 'f';
                break;
            case 15: l[i2] = 'g';
                break;
            case 16: l[i2] = 'h';
                break;
            case 17: l[i2] = 'j';
                break;
            case 18: l[i2] = 'k';
                break;
            case 19: l[i2] = 'l';
                break;
            case 20: l[i2] = 'z';
                break;
            case 21: l[i2] = 'x';
                break;
            case 22: l[i2] = 'c';
                break;
            case 23: l[i2] = 'v';
                break;
            case 24: l[i2] = 'b';
                break;
            case 25: l[i2] = 'n';
                break;
            case 26: l[i2] = 'm';
                break;
            default: l[i2] = 'a';
            }
           
        }

        //for (int j = 0; j < 10; j++) sAll += l[j];
        //cout << s;
        string namePlus;
        for (int j = 0; j < 10; j++) namePlus += l[j];
        //string namePlus = l;
        //int so=sizeof(l);
        //cout<< so<<endl;
        cars newCar{ getRandom(1990,2022),getRandom(1000,20000), getRandom(1,100),namePlus, "Yellow", type};
        add_Car(i, newCar);
    }
    //cout << sAll;
    for (int i = 0; i < 8; i++)
    {
        Application newApp(getRandom(0, 100), "Тарас", "Бульба", "1234.02.32");
        add_app(i, newApp, 0);
    }
}
void SharingCar::add_Car(int index, cars CarObj) 
    {
    if (CarNum < 10) {
        CarList[index] = CarObj;
        CarNum++;
    }
}
void SharingCar::add_app(int index, Application appObj, bool newApp)
{

    if (newApp)
    {
        for (bool j = 0; j == 0;) {
            int CarN;
            bool temp = 0;
            cout << "\nВиберіть машину:";
            if (temp == 0)
            {
                for (int i = 0; i < 10; i++)
                {
                    cout << i + 1 << "." << CarList[i].model << endl;

                }
                temp = 0;
            }
            cin >> CarN;
            CarN--;
            if (CarN >= 10 || CarN < 0)
            {
                cout << "Введене некоректну інформацію. Повторіть знову";
            }
            else {
                j = 1;
                appObj.CarNumber = CarN;
            }
        }
    }

    if (appNum < 10) {
        appList[index] = appObj;
        appNum++;
    }
}

void SharingCar::write(cars carWrite[10], Application appWrite[10])
{
    ofstream CarInfo("Car.dat");
    CarInfo.write((char*)&carWrite, sizeof(cars[10]));
    ofstream appInfo("app.dat");
    appInfo.write((char*)&appWrite, sizeof(Application[10]));
}
void SharingCar::read()
{
    ifstream Car_info;
    Car_info.open("Car.dat");
    for (int i = 0; i < 4; i++) {
        Car_info.read((char*)&CarList[i], sizeof(Car));
    }
    ifstream app_info;
    app_info.open("app.dat");
    for (int i = 0; i < 4; i++) {
        app_info.read((char*)&appList[i], sizeof(Application));
    }
}
void SharingCar::service(cars car[10], Application app[10])
{
    int i = 0;
    cout << "Введіть \n1.Для запису \n2.Для читання\n";
    cin >> i;
    if (i == 1)
        write(car, app);
    else if (i == 2)
        read();
    else cout << "Неправильна цифра";
}

void SharingCar::randomMemory()
{

    int* array = new int[rand()];
    for (int i = 0; i < 10; i++)
    {
        array[i] = CarList[i].price;
        cout << CarList[i].price << " ";
    }
    qsort(array, 10, sizeof(int), comp1);
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
}

void SharingCar::Car_show()
{
    for (int i = 0; i < 10; i++)
    {
        cout << CarList[i].model << endl;
        cout << CarList[i].color << endl;
        CarList[i].CarRun.show();
        cout << CarList[i].price << endl;
        cout << CarList[i].year << endl;
        cout << CarList[i].carType->Get_car_type() << endl;
        cout << CarList[i].carType->Get_mark() << endl;
        cout << CarList[i].carType->Get_seat() << endl;
        cout << CarList[i].carType->Get_weight() << endl;
        cout << CarList[i].carType->Get_wheal() << endl;
    }
}
void SharingCar::Car_show(int index)
{
    cout << CarList[index].model << endl;
    cout << CarList[index].color << endl;
    CarList[index].CarRun.show();
    cout << CarList[index].price << endl;
    cout << CarList[index].year << endl;
    cout << CarList[index].carType->Get_car_type() << endl;
    cout << CarList[index].carType->Get_mark() << endl;
    cout << CarList[index].carType->Get_seat() << endl;
    cout << CarList[index].carType->Get_weight() << endl;
    cout << CarList[index].carType->Get_wheal() << endl;
}

void SharingCar::app_show() {
    for (int i = 0; i < 10; i++)
    {
        cout << appList[i].timeRent << endl;
        cout << appList[i].firstName << endl;
        cout << appList[i].scondName << endl;
        cout << appList[i].dateOfBirth << endl;
    }
}
void SharingCar::app_show(int index)
{
    cout << appList[index].timeRent << endl;
    cout << appList[index].firstName << endl;
    cout << appList[index].scondName << endl;
    cout << appList[index].dateOfBirth << endl;
}

void SharingCar::check_if_ua_number(string number)
{
    Application::get_number_country(number);
}

void SharingCar::Service_Static()
{
    int find = 0, number = -1;
    string c;
    cout << "Вкажіть назву машини для видалення: ";
    cin >> c;
    try
    {
        for (int i = 0; i < 10; i++)
        {
            if (appList[i].firstName == c)
            {
                
                find++;
                number = i;
            }
        }
        if (find > 1 || number == 0 || find == 0)
        {
            
            throw 1;
        }
        else
        {

            for (int i = number; i < 9; i++)
            {
                if (appList[i].firstName != "0")
                {
                    //cout << CarList[i].color << "  "<< CarList[i + 1].color << endl;
                    appList[i].firstName = "0";
                }
                
            }
        }
    }
    catch (int)
    {
        //if (find > 1)

        cout << "Найдено більше одної машини1." << find << endl;

        /*else
        {
            cout << "Машину не найдено2."<< find <<endl << c << endl;
        }*/
    }
    
};
void SharingCar::Service_Dinamic()
{
    int find=0,number=-1;
    string c;
    cout << "Вкажіть назву машини для видалення: ";
    cin >> c;
    try
    {
        for (int i = 0; i < 10; i++)
        {
            if (CarList[i].model == c)
            {
               
                find++;
                number = i;
            }
        }
        if (find >1 || number == 0 || find == 0)
        {
           
            throw 1;
        }
        else
        {

            for (int i = number; i < 9; i++)
            {
                if (CarList[i].model != "0")
                {
                    //cout << CarList[i].color << "  "<< CarList[i + 1].color << endl;
                    CarList[i] = CarList[i + 1];
                }
                if (i==8)
                {
                    CarList[9].model = "0";
                }
            }
        }
    }
    catch (int)
    {
        //if (find > 1)
        
            cout << "Найдено більше одної машини1."<< find<<endl;
        
        /*else
        {
            cout << "Машину не найдено2."<< find <<endl << c << endl;
        }*/
    }

};

void SharingCar::overwork(int num, int carnum, char oper)
{
    switch (oper) {
    case '+':CarList[carnum].CarRun + num;
        break;
    case '-':CarList[carnum].CarRun - num;
        break;
    case '*': CarList[carnum].CarRun * num;
        break;
    case '+=': CarList[carnum].CarRun += num;
        break;
    case '-=': CarList[carnum].CarRun -= num;
        break;
    case '*=': CarList[carnum].CarRun *= num;
        break;
    case '[]': CarList[carnum].CarRun[num];
        break;
    }
}
