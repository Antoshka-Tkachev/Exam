#pragma once
#include <iostream>
#include <string>

using namespace std;

class user
{
private:
	string FIO;
	long int number_ticket;
	string faculty;
	string date_of_birth;
	string number_phone;
public:
	void set_info();
	void output();
	string get_faculty();
	string get_FIO();
};

