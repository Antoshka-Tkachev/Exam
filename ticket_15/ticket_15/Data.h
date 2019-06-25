#pragma once
#include <iostream>

using namespace std;

class Data
{
private:
	int day;
	int month;
	int year;
public:
	Data();
	void set_info();
	void output();
};

