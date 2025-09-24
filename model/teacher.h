#pragma once
#include "BaseEntity.h"
class teacher : public BaseEntity
{
private:
	
	double salary;
	int studentsIDS[5];
	int size = sizeof(studentsIDS) / sizeof(studentsIDS[0]);
public:
	// setter
	
	void setSalary(double salary) {
		this->salary = salary;
	}
	void setStudentsIDS(int studentsIDS[5]) {
		for (int i = 0; i < size; i++) {
			this->studentsIDS[i] = studentsIDS[i];
		}
		
	}
	// getter

	double getSalary() {
		return  salary;
	}
	int * getStudentsIDS() {
		return  studentsIDS;
	}
};

