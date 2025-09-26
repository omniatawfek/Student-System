#include "../service/service.cpp"


///////////////////////////// Student ////////////////////////
class StudentController {
private:
	StudentServiceImpl studentServiceImpl;
public:
	int addStudent(student student) {
		return studentServiceImpl.addStudent(student);
	}
};

///////////////////////////// course ////////////////////////
class CourseControllerl {
private:
	CourseServiceImpl courseServiceImpl;
public:
	int  addCourse(course course) {
	 return	courseServiceImpl.addCourse(course);
	}
};

///////////////////////////// Teacher ////////////////////////
class TeacherController {
private:
	TeacherServiceImpl teacherServiceImpl;
public:
	int  addTeacher(teacher teacher) {
		return teacherServiceImpl.addTeacher(teacher);
	}
};