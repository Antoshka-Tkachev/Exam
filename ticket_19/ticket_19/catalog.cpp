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

void catalog::change()
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
		visitors[metka].set_FIO();
	}
	break;

	case 2:
	{
		cout << "\nВведите новый номер телефона ";
		visitors[metka].set_number_phone();
	}
	break;

	case 3:
	{
		cout << "\nВведите новый номер автомобиля: ";
		visitors[metka].set_number_car();
	}
	break;

	case 4:
	{
		cout << "\nВведите новую дату рождения: ";
		visitors[metka].set_date_of_birth();
	}
	break;

	default:
		break;
	}
	cout << "Информация изменена успешно!";
}
