#include "pch.h"
#include <iostream>
#include <Windows.h>
#include "visitor.h"
#include "catalog.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	catalog spisok;
	spisok.add_visitor();
	spisok.delete_visitor();
	change(spisok);
	spisok.search();
	return 0;
}