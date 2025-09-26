#pragma once
#include "BaseEntity.h"
#include "teacher.h"
#include "course.h"
class student : public BaseEntity
{
private :

	double gpa;
	teacher teachers[5];
	int size = sizeof(teachers) / sizeof(teachers[0]);
	course courses[5];
	int coursesSize = sizeof(courses) / sizeof(courses[0]);
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
	void setCourses(course courses[5]) {
		for (int i = 0; i < size; i++) {
			this->courses[i] = courses[i];
		}
	}
	// getter

	double getgpa() {
		return gpa;
	}
    teacher * getTeachers() {
	   return teachers;
     }
	course* getCourses() {
		return courses;
	}
};

