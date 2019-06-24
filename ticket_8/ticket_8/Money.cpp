#include "pch.h"
#include "Money.h"


double Money::converter()
{
	double result;
	result = ruble + ((penny[0] - 48) * 10 + (penny[1] - 48))/100;

	return result;
}