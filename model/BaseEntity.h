#pragma once


#include <iostream>
using namespace std;

class BaseEntity
{
private:
	int id;
	string name;
	int age;
	int phoneNumber;

public:
	// setter
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
		;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setphoneNumber(int phoneNumber) {
		this->phoneNumber = phoneNumber;
	}


	// getter
	int getId() {
		return id;
	}
	string getName() {
		return name;

	}
	int getAge() {
		return age;
	}
	int getphoneNumber() {
		return phoneNumber;
	}

};

