#include "pch.h"
#include "visitor.h"

void visitor::set_info()
{
	cout << "Введите информацио о посетителе:\n";
	cout << "Введите ФИО:";
	cin.ignore(32767, '\n');
	getline(cin, FIO);
	cout << "Введите номер автомобиля:";
	cin >> number_car;
	cout << "Введите дату рождения:";
	cin >> date_of_birth;
	cout << "Введите номер телефона:";
	cin >> number_phone;
}

void visitor::output()
{
	cout << "ФИО:" << FIO << endl;
	cout << "Номер автомобиля: " << number_car << endl;
	cout << "Дата рождения:" << date_of_birth << endl;
	cout << "Номер телефона:" << number_phone << endl;
}

void visitor::set_FIO()
{
	getline(cin, FIO);
}

void visitor::set_number_car()
{
	cin >> number_car;
}

void visitor::set_date_of_birth()
{
	cin >> date_of_birth;
}

void visitor::set_number_phone()
{
	cin >> number_car;
}

string visitor::get_number_car()
{
	return number_car;
}

string visitor::get_FIO()
{
	return FIO;
}