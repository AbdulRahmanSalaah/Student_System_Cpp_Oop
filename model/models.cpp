#include <bits/stdc++.h>
using namespace std;

// Create Model ShareData
class ShareData
{
private:
    int id;
    string name;

public:
    //  Setter
    void setId(const int &id)
    {
        this->id = id;
    }
    void setName(const string &name)
    {
        this->name = name;
    }
    // Getter
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
};
// Create Model Person
class Person : public ShareData
{
private:
    int age;
    string phoneNumber;

public:
    void setAge(const int age)
    {
        this->age = age;
    }
    void setPhoneNumber( const string &phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }

    int getAge()
    {
        return age;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};
// Create Model Teacher
class Teacher : public Person
{
private:
    double salary;
    vector<int> studentIds;

public:
    // setters
    void setSalary(const double &salary)
    {
        this->salary = salary;
    }
    void setStudentIds(const vector<int> &studentIds)
    {
        for (int i = 0; i < studentIds.size(); i++)
        {
            this->studentIds.push_back(studentIds[i]);
        }
    }
    // getters
    double getSalary()
    {
        return salary;
    }
    vector<int> getStudentIds()
    {
        return studentIds;
    }
};
// Create Model Course
class Course : public ShareData
{
private:
    double hours;
    vector<int> studentIds;

public:
    void setHours(const double &hours)
    {
        this->hours = hours;
    }
    void setStudentIds(const vector<int> &studentIds)
    {
        for (int i = 0; i < studentIds.size(); i++)
        {
            this->studentIds.push_back(studentIds[i]);
        }
    }
    double getHours()
    {
        return hours;
    }
    vector<int> getStudentIds()
    {
        return studentIds;
    }
};
// Create Model Student
class Student : public Person
{
private:
    double gpa;
    vector<Teacher> teachers;
    vector<Course> courses;

public:
    // setters

    void setGpa(const double gpa)
    {
        this->gpa = gpa;
    }
    void setTeachers(const vector<Teacher> &teachers)
    {
        for (int i = 0; i < teachers.size(); i++)
        {
            this->teachers.push_back(teachers[i]);
        }
    }
    void setCourses(const vector<Course> &courses)
    {
        for (int i = 0; i < courses.size(); i++)
        {
            this->courses.push_back(courses[i]);
        }
    }
    // getters

    double getGpa()
    {
        return gpa;
    }
    vector<Teacher> getTeachers()
    {
        return teachers;
    }
    vector<Course> getCourses()
    {
        return courses;
    }
};
