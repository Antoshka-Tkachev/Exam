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

string visitor::get_number_car()
{
	return number_car;
}

string visitor::get_FIO()
{
	return FIO;
}

void change(vector <visitor> &visitors)
{
	string temp; // для имени
	int metka; // для поиска элемнта в массиве
	int choice; // для выбора в меню
	cout << "\nВведите ФИО постетителя, информацию о котором хотите изменить: ";
	cin >> temp;

	for (int i = 0; i < visitors.size(); i++) // поиск по масиву
	{
		if (visitors[i].get_FIO() == temp)
		{
			metka = i; // записываем номер найденного элемента
		}
	}
	cout << "\nВ какой графе хотите сделать изменение?\n"
		<< "1. ФИО\n"
		<< "2. Номер телефона\n"
		<< "3. Номер автомобиля\n"
		<< "4. Дата рождения\n"
		<< "Введите номер выбранного варианта: ";
	cin >> choice;

	switch (choice) // выбор изменения в зависимости от выбранного
	{
	case 1:
	{
		cout << "\nВведите новое ФИО: ";
		cin.ignore(32767, '\n');    // игнорим "Enter" для getline
		getline(cin, visitors[metka].FIO);
	}
	break;

	case 2:
	{
		cout << "\nВведите новый номер телефона ";
		cin >> visitors[metka].number_phone;
	}
	break;

	case 3:
	{
		cout << "\nВведите новый номер автомобиля: ";
		cin >> visitors[metka].number_car;
	}
	break;

	case 4:
	{
		cout << "\nВведите новую дату рождения: ";
		cin >> visitors[metka].date_of_birth;
	}
	break;

	default:
		break;
	}
	cout << "Информация изменена успешно!";
}