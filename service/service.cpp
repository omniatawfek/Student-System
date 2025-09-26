#include "../repo/repo.cpp"

///////////////////////////// Student ////////////////////////
// interface student
class StudentService {
public:
	 virtual int addStudent(student student) = 0;
};
// impelmentation student
class StudentServiceImpl {
private :
	StudentRepoImpl studentRepoImpl;
public :
	int  addStudent(student student) {
	  return studentRepoImpl.addStudent(student);
	}
};
///////////////////////////// course ////////////////////////
// interface course
class CourseService {
public:
	 virtual int addCourse(course course) = 0;
};
// impelmentation course
class CourseServiceImpl {
private :
	CourseRepoImpl courseRepoImpl;
public :
	int  addCourse(course course) {
	  return	courseRepoImpl.addCourse(course);
	}
};
///////////////////////////// Teacher ////////////////////////
// interface teacher
class TeacherService {
	 virtual int addTeacher(teacher teacher) = 0;
};
// impelmentation teacher
class TeacherServiceImpl {
private :
	TeacherRepoImpl teacherRepoImpl;
public :
	int  addTeacher(teacher teacher) {
	  return teacherRepoImpl.addTeacher(teacher);
	}
};