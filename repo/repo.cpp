#include <iostream>
#include "student.h"
#include "course.h"
#include "teacher.h"
using namespace std;

///////////////////////////// Student ////////////////////////
// interface student
class studentRepo {
public :
	int virtual addStudent(student student) = 0;
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
public:
	int virtual addTeacher(teacher teacher) = 0;
};
// impelmentation teacher
class teacherRepoIml : public teacherRepo {
private:
	teacher teachers[25];
	int index = 0;
public:
	int virtual addTeacher(teacher teacher) {
		if (index == 25) {
			cout << "full teacher";
		}
		else
		{
			teachers[index] = teacher;
			index++;
		}
	}
};

///////////////////////////// course ////////////////////////
// interface course
class courseRepo {
public:
	int virtual addCourse(course course) = 0;
};
// impelmentation course
class courseRepoIml : public courseRepo {
private:
	course courses[25];
	int index = 0;
public:
	int virtual addCourse(course course) {
		if (index == 25) {
			cout << "full Courses";
		}
		else
		{
			courses[index] = course;
			index++;
		}
	}

};