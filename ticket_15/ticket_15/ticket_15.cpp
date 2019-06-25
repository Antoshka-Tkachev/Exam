#include "pch.h"
#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Data value;
	value.set_info();
	value.output();

}