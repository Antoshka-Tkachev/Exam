#include "pch.h"
#include "Data.h"


Data::Data()
{
	day = 0;
	month = 0;
	year = 0;
}
void Data::set_info()
{
	try
	{
		cout << "Введите день: ";
		cin >> day;
		cout << "Введите месяц: ";
		cin >> month;
		cout << "Введите год: ";
		cin >> year;
		if (day > 31 || month > 12 || year > 2019 || day < 0 || month < 0 || year < 0 || (month == 2 && day > 29))
			throw 1;
	}
	catch(int a)
	{
		cout << "Ошибка данных" << endl;
	}
}

void Data::output()
{
	cout << "Дата: " << day << "." << month << "." << year << endl;
}
