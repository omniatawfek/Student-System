#include <iostream>
#include "student.h"
using namespace std;

///////////////////////////// Student ////////////////////////
// interface student
class studentRepo {
public :
	int virtual addStudent(student student);
};
// impelmentation student
class studentRepoIml : public studentRepo {
private : 
	student students[25];
	int index = 0;
public :
	int virtual addStudent(student student) {
		if (index == 25) {
			cout << "full student";
		}
		else
		{
			students[index] = student;
			index++;
		}
	}
};

///////////////////////////// Teacher ////////////////////////
// interface teacher
class teacherRepo {

};
// impelmentation teacher
class teacherRepoIml : public teacherRepo {

};

///////////////////////////// course ////////////////////////
// interface course
class courseRepo {

};
// impelmentation course
class courseRepoIml : public courseRepo {

};