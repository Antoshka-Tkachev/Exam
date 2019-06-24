#include "pch.h"
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Money one;
	one.set_money();
	cout << one;
	Money two;
	two.set_money();
	cout << two;
	Money result;
	result = one + two;
	cout << result;
	result = one - two;
	cout << result;
	result = one / two;
	cout << result;
	result = one.multiplication(5);
	cout << result;
	result = two.division(5);
	cout << result;
	if (one > two)
		cout << ">\n";
	if (one < two)
		cout << "<\n";
	if (one == two)
		cout << "==\n";
	if (one != two)
		cout << "!=\n";
	cout << endl;
}