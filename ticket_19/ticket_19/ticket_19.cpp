#include "pch.h"
#include <iostream>
#include <Windows.h>
#include "catalog.h"
#include "visitor.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	catalog spisok;
	spisok.add_visitor();
	spisok.delete_visitor();
	spisok.change();
	spisok.search();
	return 0;
}