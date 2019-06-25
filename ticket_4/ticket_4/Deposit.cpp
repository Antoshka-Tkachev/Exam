#include "pch.h"
#include "Deposit.h"

int Deposit::percent = 5;
string Deposit::value = "Доллар";

Deposit::Deposit()
{
	sum = 0;
	time = 0;
}

void Deposit::set_info()
{
	cout << "Введите сумму дипозита: ";
	cin >> sum;
	cout << "Введите продолжительность дипозита в месяцах: ";
	cin >> time;
}

void Deposit::result()
{
	cout << "Результат: " << sum + sum * percent * time * 30 / 365 / 100 << " " << value << endl;
}

