#include "pch.h"
#include "Real_numer.h"


Real_numer::Real_numer()
{
	x = 0;
}

void Real_numer::output()
{
	cout << "�������������� �����: " << x << endl;
}

void Real_numer::set_info()
{
	cout << "������� �������������� �����: ";
	cin >> x;
}
