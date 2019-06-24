#include "pch.h"
#include <iostream>
#include "one_array.h"
#include "two_array.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k;
	cout << "Введите кол-во элементов в одномерном  массиве: ";
	cin >> k;
	one_array first_Massiv(k);
	first_Massiv.set_info();
	first_Massiv.output();
	first_Massiv.sum();
	cout << endl;
	int n, m;
	cout << "Введите кол-во строк в двумерном  массиве: ";
	cin >> n;
	cout << "Введите кол-во столбцов в двумерном  массиве: ";
	cin >> m;
	two_array second_Massiv(n, m);
	second_Massiv.output();
	second_Massiv.sum();
}