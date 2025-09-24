#pragma once
#include "BaseEntity.h"
#include "teacher.h"
class student : public BaseEntity
{
private :

	double gpa;
	teacher teachers[5];
	int size = sizeof(studentsIDS) / sizeof(studentsIDS[0]);
public:
	// setter
	
	void setgpa(double gpa) {
		this->gpa = gpa;
	}

	void setTeachers(teacher teachers[5]) {
		for (int i = 0; i < size; i++) {
			this->teachers[i] = teachers[i];
		}
	}

	// getter
=
	double getgpa() {
		return gpa;
	}
    teacher * getTeachers() {
	   return teachers;
     }
};

