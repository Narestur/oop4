#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace Blan {
    class Blank
    {
    private:
        bool itNew = true;
        bool allInfoReady;
        bool empty;

    public:
        int timeRent;
        string firstName;
        string scondName;
        string dateOfBirth;
        int CarNumber;

        Blank(int t, string f, string sN, string dOB);
        Blank();

        void replace(Blank blank);
        void setOld();
        bool get_new();
        Blank return_blank(Blank returnB);

        void info_exist();
        void info_exist(bool showAllInfo);
        void print_name();
        void print_name(bool sn);
    };
}

