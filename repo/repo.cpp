#include <iostream>
#include "../model/student.h"
#include "../model/course.h"
#include "../model/teacher.h"
using namespace std;

///////////////////////////// Student ////////////////////////
// interface student
class StudentRepo {
public :
	 virtual int addStudent(student student) = 0;
};
// impelmentation student
class StudentRepoImpl : public StudentRepo {
private : 
	student students[25];
	int index = 0;
public :
	int addStudent(student student) {
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
class TeacherRepo {
public:
	 virtual int addTeacher(teacher teacher) = 0;
};
// impelmentation teacher
class TeacherRepoImpl : public TeacherRepo {
private:
	teacher teachers[25];
	int index = 0;
public:
	int addTeacher(teacher teacher) {
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
class CourseRepo {
public:
	 virtual int addCourse(course course) = 0;
};
// impelmentation course
class CourseRepoImpl : public CourseRepo {
private:
	course courses[25];
	int index = 0;
public:
	int  addCourse(course course) {
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