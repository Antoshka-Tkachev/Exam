#include "pch.h"
#include "list_users.h"

void list_users::add_user()
{
	string answer;
	cout << "Добавить посетителя?\n";
	cin >> answer;
	user bufer;
	if (answer == "Да")
	{
		do
		{
			bufer.set_info();
			users.push_back(bufer);
			cout << "\nДобавить посетителя?\n";
			cin >> answer;
		} while (answer != "Нет");
	}
}

void list_users::output()
{
	for (int i = 0; i < users.size(); i++)
	{
		cout << "\nИнформация о " << i + 1 <<" посетителе:\n";
		users[i].output();
	}
}

void list_users::search()
{
	int answer;
	cout << "\nВыберете желаемый вариант:\n"
		<< "1. Поиск по ФИО\n"
		<< "2. Поиск по факультету\n"
		<< "Введите номер желаемого варианта: ";
	cin >> answer;
	string temp; // переменная для поиска
	if (answer == 1)
	{
		cout << "Введите ФИО: ";
		cin >> temp;
		cout << "\nНайденные посетители:\n";
		for (int i = 0; i < users.size(); i++)
		{
			if (users[i].get_FIO() == temp)
			{
				users[i].output();
			}
		}
	}
	else
	{
		cout << "Введите факультет: ";
		cin >> temp;
		cout << "\nНайденные посетители:\n";
		for (int i = 0; i < users.size(); i++)
		{
			if (users[i].get_faculty() == temp)
			{
				users[i].output();
			}
			cout << endl;
		}
	}
}
