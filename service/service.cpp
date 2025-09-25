#include "../repo/repo.cpp"

class StudentService {
public:
	int virtual addStudent(student student) = 0;
};
class StudentServiceImpl {
private :
	StudentRepo studentRepo;
public :
	int virtual addStudent(student student) {
	  return	studentRepo.addStudent(student);
	}
};

class CourseService {
public:
	int virtual addCourse(course course) = 0;
};
class CourseServiceImpl {
private :
	CourseRepo courseRepo;
public :
	int virtual addCourse(course course) {
	  return	courseRepo.addCourse(course);
	}
};

class TeacherService {
	int virtual addTeacher(teacher teacher) = 0;
};
class TeacherServiceImpl {
private :
	TeacherRepo teacherRepo;
public :
	int virtual addTeacher(teacher teacher) {
	  return teacherRepo.addTeacher(teacher);
	}
};