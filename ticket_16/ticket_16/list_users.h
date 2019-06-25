#pragma once
#include <iostream>
#include <string>
#include "user.h"
#include <vector>

using namespace std;

class list_users
{
private:
	vector <user> users;
public:
	void add_user();
	void output();
	void search();
};

