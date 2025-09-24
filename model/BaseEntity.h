#pragma once

#include "shareData.h"
#include <iostream>
using namespace std;

class BaseEntity : public shareData
{
private:
	int age;
	int phoneNumber;

public:
	// setter
	void setAge(int age) {
		this->age = age;
	}
	void setphoneNumber(int phoneNumber) {
		this->phoneNumber = phoneNumber;
	}


	// getter
	int getAge() {
		return age;
	}
	int getphoneNumber() {
		return phoneNumber;
	}

};

