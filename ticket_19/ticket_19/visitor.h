#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class visitor
{
private:
	string FIO;
	string number_car;
	string date_of_birth;
	string number_phone;
public:
	void set_info();
	void output();
	string get_FIO();
	string get_number_car();
	friend void change(vector <visitor> &visitors);
};

