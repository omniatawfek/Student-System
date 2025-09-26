#include "../repo/repo.cpp"

///////////////////////////// Student ////////////////////////
// interface student
class StudentService {
public:
	int virtual addStudent(student student) = 0;
};
// impelmentation student
class StudentServiceImpl {
private :
	//StudentRepo studentRepo;
public :
	int virtual addStudent(student student) {
	  //return	studentRepo.addStudent(student);
	}
};
///////////////////////////// course ////////////////////////
// interface course
class CourseService {
public:
	int virtual addCourse(course course) = 0;
};
// impelmentation course
class CourseServiceImpl {
private :
	//CourseRepo courseRepo;
public :
	int virtual addCourse(course course) {
	  //return	courseRepo.addCourse(course);
	}
};
///////////////////////////// Teacher ////////////////////////
// interface teacher
class TeacherService {
	int virtual addTeacher(teacher teacher) = 0;
};
// impelmentation teacher
class TeacherServiceImpl {
private :
	/*TeacherRepo teacherRepo;*/
public :
	int virtual addTeacher(teacher teacher) {
	  //return teacherRepo.addTeacher(teacher);
	}
};