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

class student : public person
{
private:
    double gpa;

public:
    // setters

    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
    // getters

    double getGpa()
    {
        return gpa;
    }
};
class teacher : public person
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