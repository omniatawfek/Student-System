#pragma once
#include "BaseEntity.h"
class teacher : public BaseEntity
{
private:
	
	double salary;
public:
	// setter
	
	void setSalary(double salary) {
		this->salary = salary;
	}

	// getter

	double getSalary() {
		return  salary;
	}
};

