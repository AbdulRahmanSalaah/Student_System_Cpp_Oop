#include "../repository/Repository.cpp"
#include "../validation/Validation.cpp"

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

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
    StudentValidation studentValidation;
    ValidationService validationService;

public:
    int addStudent(Student &student)
    {
        if (studentValidation.validteStudent(student) == 1)
        {
            int id = s.addStudent(student);
            if (id == -1)
            {
                validationService.fullData("Student");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
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
    CourseValidation courseValidation;
    ValidationService validationService;

public:
    int addCourse(Course &course)
    {
        if (courseValidation.validteCourse(course) == 1)
        {
            int id = c.addCourse(course);
            if (id == -1)
            {
                validationService.fullData("Course");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
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
    TeacherValidation teacherValidation;
    ValidationService validationService;

public:
    int addTeacher(Teacher &teacher)
    {
        if (teacherValidation.validteTeacher(teacher) == 1)
        {
            int id = t.addTeacher(teacher);
            if (id == -1)
            {
                validationService.fullData("Teacher");
            }
            else
            {
                return id;
            }
        }
        return -1;
    }
};