#include "pch.h"
#include <iostream>
#include "Number.h"
#include "Real_numer.h"
#include "Complex_number.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Real_numer a;
	Complex_number b;
	a.set_info();
	a.output();
	b.set_info();
	b.output();
	return 0;
}