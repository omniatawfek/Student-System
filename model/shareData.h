#pragma once

#include <iostream>
using namespace std;

class shareData
{
private:
	int id;
	string name;
public:
	// setter
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		this->name = name;
	}
	// getter
	int getId() {
		return id;
	}
	string getName() {
		return name;

	}
};

