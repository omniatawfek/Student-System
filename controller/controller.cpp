#include "../service/service.cpp"


///////////////////////////// Student ////////////////////////
class StudentController {
private:
	StudentService studentService;
public:
	int virtual addStudent(student student) {
		return studentService.addStudent(student);
	}
};

///////////////////////////// course ////////////////////////
class CourseControllerl {
private:
	CourseService courseService;
public:
	int virtual addCourse(course course) {
	 return	courseService.addCourse(course);
	}
};

///////////////////////////// Teacher ////////////////////////
class TeacherController {
private:
	TeacherService teacherService;
public:
	int virtual addTeacher(teacher teacher) {
		return teacherService.addTeacher(teacher);
	}
};