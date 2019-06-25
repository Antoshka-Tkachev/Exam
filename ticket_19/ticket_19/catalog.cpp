#include "pch.h"
#include "catalog.h"

void catalog::add_visitor()
{
	string answer;
	cout << "Добавить посетителя?\n";
	cin >> answer;
	visitor bufer;
	if (answer == "Да")
	{
		do
		{
			bufer.set_info();
			visitors.push_back(bufer);
			cout << "\nДобавить посетителя?\n";
			cin >> answer;
		} while (answer != "Нет");
	}
}


void catalog::search()
{
	int answer;
	cout << "\nВыберете желаемый вариант:\n"
		<< "1. Поиск по ФИО\n"
		<< "2. Поиск по номеру автомобиля\n"
		<< "Введите номер желаемого варианта: ";
	cin >> answer;
	string temp; // переменная для поиска
	if (answer == 1)
	{
		cout << "Введите ФИО: ";
		cin >> temp;
		cout << "\nНайденные посетители:\n";
		for (int i = 0; i < visitors.size(); i++)
		{
			if (visitors[i].get_FIO() == temp)
			{
				visitors[i].output();
			}
		}
	}
	else
	{
		cout << "Введите номер автомобиля: ";
		cin >> temp;
		cout << "\nНайденные посетители:\n";
		for (int i = 0; i < visitors.size(); i++)
		{
			if (visitors[i].get_number_car() == temp)
			{
				visitors[i].output();
			}
			cout << endl;
		}
	}
}

void catalog::delete_visitor()
{
	string temp;
	int metka;
	cout << "\nВведите ФИО постетителя, которого хотите удалить: ";
	cin >> temp;
	for (int i = 0; i < visitors.size(); i++)
	{
		if (visitors[i].get_FIO() == temp)
		{
			metka = i;
		}
	}
	visitors.erase(visitors.begin() + metka);
}