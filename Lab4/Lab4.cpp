// 
//
#include "Application.h"
#include "SharingCar.h"
#include <Windows.h>
#include <iostream>
#include "overint.h"


#pragma execution_character_set( "utf-8" )
using namespace std;
using namespace App;
using namespace Sharing;
using namespace overwrite;

void time_rent(Application how)
{
    int callcul = how.timeRent, month;
    cout << callcul;
    month = callcul / 30;
    cout << "\n" << month;
}



int main()
{
    //etConsoleOutputCP(65001); // UTF-8
    SetConsoleOutputCP(CP_UTF8); // UTF-8
    
    //setlocale(LC_ALL, "Ukr");
    SharingCar sharingList[5];
    SharingCar* sharingArray = new SharingCar[5];
    for (int i = 0; i < 5; i++)
    {
        sharingList[i] = SharingCar();
        //sharingList[i].app_show();
    }
    for (int i = 0; i < 5; i++)
    {
        sharingArray[i] = SharingCar();
    }
    Application::print_info();
    sharingArray[1].check_if_ua_number("38097061722189");
    
    Application a(400,"1","1","1");
    //a.get_number_country("380978888888");
    //a.pring_additional_info();
    //cout << "\n\n\n";
    //a.pring_additional_info(1);
 
    SharingCar sharingL = sharingList[4];
    SharingCar sharingA = sharingArray[1];
    //time_rent(a);

    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(413,7,'+');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(2, 7, '-');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(0,7, '*');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(1, 7, '-=');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(2, 7, '+=');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(3, 7, '*=');
    cout << endl << endl;
    sharingL.Car_show(7);
    sharingL.overwork(4, 7, '[]');
    cout << endl << endl;
    sharingL.Car_show(7);


    //cout << endl << endl << endl;
    //sharingL.app_show(2);

    //sharingL.Service_Dinamic();
    //cout << endl;
    //sharingL.Car_show(7);
    //cout << endl;
    //sharingL.Car_show(8);
    //cout << endl;

    //////cout << endl;
    //////sharingA.Car_show(2);
    //////delete[] sharingArray;
    //////cout << endl;
    //////cout << endl;
    //////sharingA.randomMemory();
    cout << "\n\n\n";
    overint i = 231;
    i.show();
    i + 11230;
    i.show();
    i - 7;
    i.show();
    i * 6;
    i.show();
    i += 6;
    i.show();
    i -= 6;
    i.show();
    i *= 6;
    i.show();
    i + 112;
    i[4];
    i.show();

    /*TempClase <float> k;
    float mk=1;
    k.mToKm(10000);
    cout<<endl<< mk<<"km";*/
}
