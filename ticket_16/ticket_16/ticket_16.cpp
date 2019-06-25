#include "pch.h"
#include <iostream>
#include <Windows.h>
#include "user.h"
#include "list_users.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	list_users spisok;
	spisok.add_user();
	spisok.output();
	spisok.search();
	return 0;
}