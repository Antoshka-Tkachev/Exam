#include "pch.h"
#include "Money.h"
#include "iostream"

Money::Money()
{
	ruble = 123;
	penny[0] = '4';
	penny[1] = '5';
}

double Money::converter()
{
	double result = 0;
	double bufer = (penny[0] - 48) * 10 + (penny[1] - 48);
	result = ruble + bufer/100;
	return result;
}

/*Money Money::operator-(Money & obj)
{
	return (this->converter() > obj.converter());
}

Money Money::operator/(Money & obj)
{
	return (this->converter() > obj.converter());
}
*/
bool Money::operator==(Money & obj)
{
	return (this->converter() == obj.converter());
}

bool Money::operator!=(Money & obj)
{
	return (this->converter() != obj.converter());
}

bool Money::operator<(Money & obj)
{
	return (this->converter() < obj.converter());
}

bool Money::operator>(Money & obj)
{
	return (this->converter() > obj.converter());
}

Money &Money::operator=(const Money &obj)
{
	ruble = obj.ruble;
	penny[0] = obj.penny[0];
	penny[1] = obj.penny[1];
	return *this;
}

ostream &operator<<(ostream &stream, Money &obj)
{
	stream << "Ñóììà: " << obj.ruble << "," << obj.penny[0] << obj.penny[1] << endl;
	return stream;
}

Money Money::operator+(Money & obj)
{
	Money temp;
	temp.ruble = this->ruble + obj.ruble;
	temp.penny[0] = this->penny[0] + obj.penny[0];
	temp.penny[1] = this->penny[1] + obj.penny[1];
	return temp;
}