#include "../model/models.cpp"
#include <bits/stdc++.h>
using namespace std;

/////////////////////////////  Student \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// static Data
class Data
{
public:
    static Student students[25];
    static int indexStudent;
    static int idStudent;
    static Course courses[25];
    static int indexCourse;
    static int idCourse;
    static Teacher teachers[25];
    static int indexTeacher;
    static int idTeacher;
};
// init static data
Student Data::students[25];
int Data::indexStudent = 0;
int Data::idStudent = 1;
Course Data::courses[25];
int Data::indexCourse = 0;
int Data::idCourse = 1;
Teacher Data::teachers[25];
int Data::indexTeacher = 0;
int Data::idTeacher = 1;

// Interface studentrepository
class Studentrepository
{
public:
    virtual int addStudent(Student &student) = 0;
};

// Class StudentRepositoryImpl
class StudentrepositoryImpl : public Studentrepository
{
private:
    Data d;

public:
    int addStudent(Student &student)
    {
        if (d.indexStudent == 25)
        {
            return -1;
        }
        else
        {
            student.setId(d.idStudent++);
            d.students[d.indexStudent++] = student;
        }
        return student.getId();
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
private:
    Data d;

public:
    int addCourse(Course &course)
    {
        if (d.indexCourse == 25)
        {
            return -1;
        }
        else
        {
            course.setId(d.idCourse++);
            d.courses[d.indexCourse++] = course;
        }
        return course.getId();
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
private:
    Data d;

public:
    int addTeacher(Teacher &teacher)
    {
        if (d.indexTeacher == 25)
        {
            return -1;
        }
        else
        {
            teacher.setId(d.idTeacher++);
            d.teachers[d.indexTeacher++] = teacher;
        }
        return teacher.getId();
    }
};
