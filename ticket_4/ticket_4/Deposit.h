#pragma once
#include <iostream>
#include <string>

using namespace std;

class Deposit
{
private:
	double sum;
	static int percent; // static - одинаковая для всех обьектов класса(тк % везде одинаковый)
	int time;
	static string value; // валюта(доллар, рубль и тд)
public:
	Deposit();
	void set_info();
	void result();
};

