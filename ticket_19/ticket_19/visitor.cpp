#include "pch.h"
#include "visitor.h"

void visitor::set_info()
{
	cout << "������� ���������� � ����������:\n";
	cout << "������� ���:";
	cin.ignore(32767, '\n');
	getline(cin, FIO);
	cout << "������� ����� ����������:";
	cin >> number_car;
	cout << "������� ���� ��������:";
	cin >> date_of_birth;
	cout << "������� ����� ��������:";
	cin >> number_phone;
}

void visitor::output()
{
	cout << "���:" << FIO << endl;
	cout << "����� ����������: " << number_car << endl;
	cout << "���� ��������:" << date_of_birth << endl;
	cout << "����� ��������:" << number_phone << endl;
}

string visitor::get_number_car()
{
	return number_car;
}

string visitor::get_FIO()
{
	return FIO;
}

/*void change(vector <visitor> &visitors)
{
	string temp; // ��� �����
	int metka; // ��� ������ ������� � �������
	int choice; // ��� ������ � ����
	cout << "\n������� ��� �����������, ���������� � ������� ������ ��������: ";
	cin >> temp;

	for (int i = 0; i < visitors.size(); i++) // ����� �� ������
	{
		if (visitors[i].get_FIO() == temp)
		{
			metka = i; // ���������� ����� ���������� ��������
		}
	}
	cout << "\n� ����� ����� ������ ������� ���������?\n"
		<< "1. ���\n"
		<< "2. ����� ��������\n"
		<< "3. ����� ����������\n"
		<< "4. ���� ��������\n"
		<< "������� ����� ���������� ��������: ";
	cin >> choice;

	switch (choice) // ����� ��������� � ����������� �� ����������
	{
	case 1:
	{
		cout << "\n������� ����� ���: ";
		cin.ignore(32767, '\n');    // ������� "Enter" ��� getline
		getline(cin, visitors[metka].FIO);
	}
	break;

	case 2:
	{
		cout << "\n������� ����� ����� �������� ";
		cin >> visitors[metka].number_phone;
	}
	break;

	case 3:
	{
		cout << "\n������� ����� ����� ����������: ";
		cin >> visitors[metka].number_car;
	}
	break;

	case 4:
	{
		cout << "\n������� ����� ���� ��������: ";
		cin >> visitors[metka].date_of_birth;
	}
	break;

	default:
		break;
	}
	cout << "���������� �������� �������!";
}*/
