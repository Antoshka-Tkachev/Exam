#include "pch.h"
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Money qwer;
	Money qwer2;
	Money qwer1;
	qwer = qwer1 + qwer2;
	cout << qwer;
/*	qwer2.ruble = 12;
	cout << qwer.converter();
	cout << endl;
	cout << qwer2.converter();
	cout << endl;
	if (qwer > qwer2)
		cout << ">";
	if (qwer < qwer2)
		cout << "<";
	cout << qwer.converter();
	cout << endl;
	cout << qwer2.converter();
	cout << endl;*/

}
