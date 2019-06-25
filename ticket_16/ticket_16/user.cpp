#include "pch.h"
#include "user.h"

void user::set_info()
{
	cout << "Введите информацио о посетителе:\n";
	cout << "Введите ФИО:";
	cin.ignore(32767, '\n');
	getline(cin, FIO);
	cout << "Введите номер читальского билета:";
	cin >> number_ticket;
	cout << "Введите факультет:";
	cin >> faculty;
	cout << "Введите дату рождения:";
	cin >> date_of_birth;
	cout << "Введите номер телефона:";
	cin >> number_phone;
}

void user::output()
{
	cout << "ФИО:" << FIO << endl;
	cout << "Номер читальского билета: " << number_ticket << endl;
	cout << "Факультет:" << faculty << endl;
	cout << "Дата рождения:"<< date_of_birth << endl;
	cout << "Номер телефона:" << number_phone << endl;
}

string user::get_faculty()
{
	return faculty;
}

string user::get_FIO()
{
	return FIO;
}
