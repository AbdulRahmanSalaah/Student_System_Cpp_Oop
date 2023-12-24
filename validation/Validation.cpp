/******************* Validation Class ***********************/

#include <iostream>
#include <string>
using namespace std;
bool checkName(string name);
// StudentValidation Class
class StudentValidation
{
public:
    int validteStudent(Student student)
    {
        if (!checkName(student.getName()))
        {
            cout << "Invalid Name !" << endl;
        }
        else if (student.getAge() >= 30 ||
                 student.getAge() <= 5)
        {
            cout << "Invalid Age !" << endl;
        }
        else if (student.getPhoneNumber()[0] != '0' ||
                 ((student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '1') &&
                  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '2') &&
                  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '0') &&
                  (student.getPhoneNumber()[1] + student.getPhoneNumber()[2]) != ('1' + '5')) ||
                 student.getPhoneNumber().size() != 11)
        {
            cout << "Invalid Phone Number !" << endl;
        }
        else if (student.getGpa() >= 4 || student.getGpa() < 0)
        {
            cout << "Invalid GPA !" << endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};

// CourseValidation Class
class CourseValidation
{
public:
    int validteCourse(Course course)
    {

        if (course.getHours() <= 0 || course.getHours() >= 4)
        {
            cout << "Invalid Hour !" << endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};

// TeacherValidation Class
class TeacherValidation
{
public:
    int validteTeacher(Teacher teacher)
    {
        if (!checkName(teacher.getName()))
        {
            cout << "Invalid Name !" << endl;
        }
        else if (teacher.getAge() >= 60 || // 30 60
                 teacher.getAge() <= 25)
        {
            cout << "Invalid Age !" << endl;
        }
        else if (teacher.getPhoneNumber()[0] != '0' ||
                 ((teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '1') &&
                  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '2') &&
                  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '0') &&
                  (teacher.getPhoneNumber()[1] + teacher.getPhoneNumber()[2]) != ('1' + '5')) ||
                 teacher.getPhoneNumber().size() != 11)
        {
            cout << "Invalid Phone Number !" << endl;
        }
        else if (teacher.getSalary() < 500 || teacher.getSalary() > 15000)
        {
            cout << "Invalid Salary !" << endl;
        }
        else
        {
            return 1;
        }
        return -1;
    }
};

class ValidationService
{
public:
    void fullData(string type)
    {
        cout << "Full " << type << " !" << endl;
    }
    void notExist(string type, int id)
    {
        cout << type << " With Id [" << id << "] Not Exist" << endl;
    }
};
bool checkName(string name)
{
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] >= '0' && name[i] <= '9')
        {
            return false;
        }
    }
    return true;
}