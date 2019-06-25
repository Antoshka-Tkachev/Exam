#pragma once
#include "Number.h"

class Complex_number : public Number
{
private:
	double Re;
	double Im;
public:
	Complex_number();
	void output()override;
	void set_info()override;
};

