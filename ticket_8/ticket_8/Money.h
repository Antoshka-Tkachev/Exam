#pragma once

using namespace std; 

class Money
{
private:
	long int ruble;
	unsigned char penny[2];
public:
	Money();
	int get_penny();
	long int get_ruble();
	double converter();
	Money &operator=(const Money &obj);
	Money multiplication(double k);
	Money division(double k);
	Money operator+(Money & obj);
	//Money operator-(Money & obj);
	//Money operator/(Money & obj);
	bool operator==(Money & obj);
	bool operator!=(Money & obj);
	bool operator>(Money & obj);
	bool operator<(Money & obj);
	friend ostream &operator<<(ostream &stream, Money &obj);
};

