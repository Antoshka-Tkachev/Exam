#pragma once
#include <iostream>
#include <string>
#include "visitor.h"
#include <vector>

using namespace std;

class catalog
{
private:
	vector <visitor> visitors;
public:
	void add_visitor();
	void search();
	void delete_visitor();
	void change();
};

