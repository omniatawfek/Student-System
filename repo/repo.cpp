#include <iostream>
#include "../model/student.h"
#include "../model/course.h"
#include "../model/teacher.h"
using namespace std;

class Data {
public :
	static student students[25];
	static int indexStudent ;
	static int idStudent ;
	static teacher teachers[25];
	static int indexTeacher ;
	static int idTeacher ;
	static course courses[25];
	static int indexCourse ;
	static int idCourse ;
};
student  Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;
teacher  Data::teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;
course  Data::courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;
///////////////////////////// Student ////////////////////////
// interface student
class StudentRepo {
public :
	 virtual int addStudent(student student) = 0;
};
// impelmentation student
class StudentRepoImpl : public StudentRepo {
private : 
	Data data;
public :
	int addStudent(student student) {
		if (data.indexStudent == 25) {
			cout << "full student";
		}
		else
		{
			student.setId(data.idStudent++);
			data.students[data.indexStudent++] = student;
			
		}
		return student.getId();
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
	Data data;
public:
	int addTeacher(teacher teacher) {
		if (data.indexTeacher == 25) {
			cout << "full teacher";
		}
		else
		{
			data.teachers[data.indexTeacher++] = teacher;
			
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
	Data data;
public:
	int  addCourse(course course) {
		if (data.indexCourse == 25) {
			cout << "full Courses";
		}
		else
		{
			data.courses[data.indexCourse++] = course;
		
		}
	}

};