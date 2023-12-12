#include "../repository/Repository.cpp"

// Interface Service
class StudentService
{
    virtual int addStudent(Student &student) = 0;
};

// Class ServiceImpl
class StudentServiceImpl : public StudentService
{
private:
    StudentrepositoryImpl s;

public:
    int addStudent(Student &student)
    {
        return s.addStudent(student);
    }
};

// Interface Service
class CourseService
{
    virtual int addCourse(Course &course) = 0;
};

// Class ServiceImpl
class CourseServiceImpl : public CourseService
{
private:
    CourseRepositoryImpl c;

public:
    int addCourse(Course &course)
    {
        return c.addCourse(course);
    }
};

// Interface Service
class TeacherService
{
    virtual int addTeacher(Teacher &teacher) = 0;
};

// Class ServiceImpl

class TeacherServiceImpl : public TeacherService
{
private:
    TeacherRepositoryImpl t;

public:
    int addTeacher(Teacher &teacher)
    {
        return t.addTeacher(teacher);
    }
};