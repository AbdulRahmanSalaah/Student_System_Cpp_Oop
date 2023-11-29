#include "../model/models.cpp"
#include <bits/stdc++.h>
using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\

// Interface studentrepository
class Studentrepository
{
    virtual int addStudent(Student &student) = 0;
};

// Class StudentRepositoryImpl
class StudentrepositoryImpl : public Studentrepository
{
    vector<Student> students;
    int index = 0;

public:
    int addStudent(Student &student)
    {
        if (index == 25)
        {
            return -1;
        }
        else
        {
            students.push_back(student);
            index++;
        }
    }
};

/////////////////////////////  Course \\\\\\\\\\\\\\\\\\\\\\\\\\\\\


// Interface CourseRepository
class CourseRepository
{
    virtual int addCourse(Course &course) = 0;
};
// Class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
    vector<Course> courses;
    int index = 0;

public:
    int addCourse(Course &course)
    {
        if (index == 25)
        {
            return -1;
        }
        else
        {
            courses.push_back(course);
            index++;
        }
    }
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Interface TeacherRepository
class TeacherRepository
{
    virtual int addTeacher(Teacher &teacher) = 0;
};
// Class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
    vector<Teacher> teachers;
    int index = 0;

public:
    int addTeacher(Teacher &teacher)
    {
        if (index == 25)
        {
            return -1;
        }
        else
        {
            teachers.push_back(teacher);
            index++;
        }
    }
};
