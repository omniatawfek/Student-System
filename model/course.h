#pragma once

#include "shareData.h"
#include <iostream>
using namespace std;

class course : public shareData
{
private :
	double hour;
	int studentsIDS[5];
	int size = sizeof(studentsIDS) / sizeof(studentsIDS[0]);
public :
	//Setter
	void setHour(double hour) {
		this->hour = hour;
	}
	void setStudentsIDS(int studentsIDS[5]) {
		for (int i = 0; i < size; i++) {
			this->studentsIDS[i] = studentsIDS[i];
		}

	}
	//Getter
	double getHour() {
		return hour;
	}
	int* getStudentsIDS() {
		return  studentsIDS;
	}
};

