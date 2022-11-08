#pragma once
#include <iostream>
#include <cstring>
using namespace std;
namespace overwrite {
	class overint
	{
	public:
		int data;
		overint(int);
		void operator + (int);
		void operator - (int);
		void operator * (int);
		void operator = (int);
		void operator += (int);
		void operator -= (int);
		void operator *= (int);
		void operator [](int);
		void show();
	};
	template <class T> 	class TempClase
	{
	public:
		int mTk = 1000; 
		int cmTk = 10000;
		T mToKm(T dist);
		T cmToKm(T dist);
		T cmToM(T dist);
	};
}

