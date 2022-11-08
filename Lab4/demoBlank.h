#pragma once
#include <string>
#include "Blank.h"

using namespace std;
using namespace Blan;
namespace demoB
{

    class demoBlank :private Blank
    {
    public:

        demoBlank(int, string, string, string);
        void print_all();
    };

}

