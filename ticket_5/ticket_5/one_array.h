#pragma once
#include <iostream>

using namespace std;

class one_array
{
private:
	int N;
	int *array;
public:
	one_array(int k);
	void set_info();
	void output();
	void sum();
};

