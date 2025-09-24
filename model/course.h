#pragma once

#include "shareData.h"
#include <iostream>
using namespace std;

class course : public shareData
{
private :
	double hour;
public :
	void setHour(double hour) {
		this->hour = hour;
	}
	double getHour() {
		return hour;
	}
};

