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
		cout << "Комплекское число: " << Re << "+" << Im << "*i" << endl;
	else
		cout << "Комплексное число: " << Re << Im << "*i" << endl;
}

void Complex_number::set_info()
{
	cout << "\nКомплексное число:\n";
	cout << "Введите действительную часть: ";
	cin >> Re;
	cout << "Введите мнимую часть: ";
	cin >> Im;
}
