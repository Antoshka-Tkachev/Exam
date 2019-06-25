#include "pch.h"
#include <iostream>
#include "Deposit.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Deposit Dep;
	Dep.set_info();
	Dep.result();
}