#include "pch.h"
#include "Money.h"
#include <string>

Money::Money()
{
	ruble = 0;
	penny[0] = '0';
	penny[1] = '0';
}

void Money::set_money()
{
	int bufer;
	cout << "������� ���-�� ������: ";
	cin >> ruble;
	cout << "������� ���-�� ������: ";
	cin >> bufer;
	if (bufer > 10) //��������, ���� �� �� �����, �� �������� � ������ � ������ � ������ ��� �����������
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		penny[0] = '0'; // ������������ �������� ������ ��������
		penny[1] = str_bufer[0];
	}
}

double Money::converter()
{
	double result = 0;
	double bufer = (penny[0] - 48) * 10 + (penny[1] - 48);
	result = ruble + bufer/100;
	return result;
}

Money Money::multiplication(double k)
{
	Money temp;
	double bufer = this->converter() * k;
	temp.ruble = bufer; // ���������� ������ ����� ����� �� ruble long int
	bufer = (bufer - temp.ruble) * 100; // ���-�� ������
	if (bufer > 10) //��������, ���� �� �� �����, �� �������� � ������ � ������ � ������ ��� �����������
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = '0'; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[0];
	}
	return temp;
}

Money Money::division(double k)
{
	Money temp;
	double bufer = this->converter() / k;
	temp.ruble = bufer; // ���������� ������ ����� ����� �� ruble long int
	bufer = (bufer - temp.ruble) * 100; // ���-�� ������
	if (bufer > 10) //��������, ���� �� �� �����, �� �������� � ������ � ������ � ������ ��� �����������
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = '0'; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[0];
	}
	return temp;
}

Money Money::operator+(Money & obj)
{
	Money temp;
	double bufer;
	bufer = this->converter() + obj.converter();
	temp.ruble = bufer; // ���������� ������ ����� ����� �� ruble long int
	bufer = (bufer - temp.ruble) * 100; // ���-�� ������
	if (bufer > 10) //��������, ���� �� �� �����, �� �������� � ������ � ������ � ������ ��� �����������
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = '0'; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[0];
	}
	return temp;
}

Money Money::operator-(Money & obj)
{
	Money temp;
	double bufer;
	bufer = this->converter() - obj.converter();
	temp.ruble = bufer; // ���������� ������ ����� ����� �� ruble long int
	bufer = (bufer - temp.ruble) * 100; // ���-�� ������
	if (bufer > 10)
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = '0'; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[0];
	}
	return temp;
}

Money Money::operator/(Money & obj)
{
	Money temp;
	double bufer;
	bufer = this->converter() / obj.converter();
	temp.ruble = bufer; // ���������� ������ ����� ����� �� ruble long int
	bufer = (bufer - temp.ruble) * 100; // ���-�� ������
	if (bufer > 10)
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = str_bufer[0]; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[1];
	}
	else
	{
		string str_bufer = to_string(bufer); //������� ���-�� ������ � string 
		temp.penny[0] = '0'; // ������������ �������� ������ ��������
		temp.penny[1] = str_bufer[0];
	}
	return temp;
}

bool Money::operator==(Money & obj)
{
	return (this->converter() == obj.converter());
}

bool Money::operator!=(Money & obj)
{
	return (this->converter() != obj.converter());
}

bool Money::operator<(Money & obj)
{
	return (this->converter() < obj.converter());
}

bool Money::operator>(Money & obj)
{
	return (this->converter() > obj.converter());
}

Money &Money::operator=(const Money &obj)
{
	ruble = obj.ruble;
	penny[0] = obj.penny[0];
	penny[1] = obj.penny[1];
	return *this;
}

ostream &operator<<(ostream &stream, Money &obj)
{
	stream << "���������: " << obj.ruble << "," << obj.penny[0] << obj.penny[1] << endl;
	return stream;
}