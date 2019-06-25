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
	void set_FIO();
	void set_number_car();
	void set_date_of_birth();
	void set_number_phone();
	string get_FIO();
	string get_number_car();
};

