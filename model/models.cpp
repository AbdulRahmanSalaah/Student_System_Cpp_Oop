#include <bits/stdc++.h>
using namespace std;

class person
{
private:
    string name;
    int age;
    string phoneNumber;

public:
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber = phoneNumber;
    }
    string getName()
    {
        return name;
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

class Teacher : public person
{
private:
    double salary;

public:
    // setters
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    // getters
    double getSalary()
    {
        return salary;
    }
};

class student : public person
{
private:
    double gpa;
    Teacher teachers[5];

public:
    // setters

    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
    void setTeachers(Teacher teachers[5])
    {
        for (int i = 0; i < 5; i++)
        {
            this->teachers[i] = teachers[i];
        }
    }
    // getters

    double getGpa()
    {
        return gpa;
    }
    Teacher *getTeachers()
    {
        return teachers;
    }
};
