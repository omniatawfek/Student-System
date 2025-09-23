#pragma once
#include "BaseEntity.h"
class student : public BaseEntity
{
private :

	double gpa;
public:
	// setter
	
	void setgpa(double gpa) {
		this->gpa = gpa;
	}

	// getter
=
	double getgpa() {
		return gpa;
	}
};

