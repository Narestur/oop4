#include "overint.h"
#include <string>
using namespace overwrite;
overint::overint(int i)
{
	data = i;
};
void overint::operator+(int i)
{
	string value=to_string(data);
	value += to_string(i);
	data = atoi(value.c_str());
};
void overint::operator-(int i)
{
	string value = to_string(data);
	string valueTemp="";
	for (int j = (value.length()) - i,j1=0; j > j1; j1++)
	{
		valueTemp += value[j1];
	}
	value = valueTemp;
	data = atoi(value.c_str());
}

void overint::operator * (int i)
{
	string value = to_string(data);
	string valueTemp = value;
	for (int i1 = 0; i1 < i;i1++) {
	for (int j = (value.length()), j1 = 0; j > j1; j1++)
	{
		valueTemp += value[j1];
	}
}
	value = valueTemp;
	data = atoi(value.c_str());
};
void overint::operator = (int i)
{
	data = i;
};
void overint::operator += (int i)
{
	data = i+(data % i);
};
void overint::operator -= (int i)
{
	data = i - (data % i);
};
void overint::operator *= (int i)
{
	data = i * (data % i);
};
void overint::operator [](int i)
{
	string value = to_string(data),valve= to_string(i);
		for (int j = (value.length()), j1 = 0; j > j1; j1++)
		{
			value[j1] = valve[0];
		}
	
	data = atoi(value.c_str());
};
void overint::show()
{
	cout << data<<endl;
}

template <class T> T TempClase<T>::mToKm(T dist)
{
	return dist / mTk;
};

template <class T> T TempClase<T>::cmToKm(T dist)
{
	return dist / cmTk;
};

template <class T> T TempClase<T>::cmToM(T dist)
{
	return dist / (cmTk/mTk);
};