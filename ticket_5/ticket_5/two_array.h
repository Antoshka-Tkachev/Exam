#pragma once

#include <iostream>

using namespace std;

class two_array
{
private:
	int stroka;
	int stolbik;
	int **array;
public:
	two_array(int n, int m);
	void output();
	void sum();
};

