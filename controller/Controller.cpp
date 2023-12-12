#include "../service/Service.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class StudentController
{
private:
    StudentServiceImpl st;

public:
    int addStudent(Student &student)
    {
        return st.addStudent(student);
    }
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class CourseController
{
private:
    CourseServiceImpl c;

public:
    int addCourse(Course &course)
    {
        return c.addCourse(course);
    }
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

class TeacherController
{
private:
    TeacherServiceImpl t;

public:
    int addTeacher(Teacher &teacher)
    {
        return t.addTeacher(teacher);
    }
};