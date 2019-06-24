#pragma once
class Money
{
private:
	long int ruble = 123;
	unsigned char penny[2] = {'4','5'};
public:
	int get_penny();
	long int get_ruble();
	double converter();
};

