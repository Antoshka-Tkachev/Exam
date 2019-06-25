#pragma once
#include "Number.h"

class Real_numer : public Number
{
private:
	double x;
public:
	Real_numer();
	void output()override;
	void set_info()override;
};

