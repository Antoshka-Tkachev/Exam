#include "pch.h"
#include "catalog.h"

void catalog::add_visitor()
{
	string answer;
	cout << "�������� ����������?\n";
	cin >> answer;
	visitor bufer;
	if (answer == "��")
	{
		do
		{
			bufer.set_info();
			visitors.push_back(bufer);
			cout << "\n�������� ����������?\n";
			cin >> answer;
		} while (answer != "���");
	}
}


void catalog::search()
{
	int answer;
	cout << "\n�������� �������� �������:\n"
		<< "1. ����� �� ���\n"
		<< "2. ����� �� ������ ����������\n"
		<< "������� ����� ��������� ��������: ";
	cin >> answer;
	string temp; // ���������� ��� ������
	if (answer == 1)
	{
		cout << "������� ���: ";
		cin >> temp;
		cout << "\n��������� ����������:\n";
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
		cout << "������� ����� ����������: ";
		cin >> temp;
		cout << "\n��������� ����������:\n";
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
	cout << "\n������� ��� �����������, �������� ������ �������: ";
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