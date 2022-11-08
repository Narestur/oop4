#pragma once
#include <string>
using namespace std;
namespace CarParameters
{
    class Car_parameters {
    public:
        
        Car_parameters(string m, string c);
        Car_parameters();
        string model = "t";
        string color="t";
    };
    
}

