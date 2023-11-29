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
};
// Class CourseRepositoryImpl
class CourseRepositoryImpl : public CourseRepository
{
};

/////////////////////////////  Teacher \\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// Interface TeacherRepository
class TeacherRepository
{
};
// Class TeacherRepositoryImpl
class TeacherRepositoryImpl : public TeacherRepository
{
};
