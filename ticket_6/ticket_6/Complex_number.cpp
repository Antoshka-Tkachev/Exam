#include "pch.h"
#include "Complex_number.h"


Complex_number::Complex_number()
{
	Re = 0;
	Im = 0;
}

void Complex_number::output()
{
	if (Im >= 0)
		cout << "����������� �����: " << Re << "+" << Im << "*i" << endl;
	else
		cout << "����������� �����: " << Re << Im << "*i" << endl;
}

void Complex_number::set_info()
{
	cout << "\n����������� �����:\n";
	cout << "������� �������������� �����: ";
	cin >> Re;
	cout << "������� ������ �����: ";
	cin >> Im;
}
