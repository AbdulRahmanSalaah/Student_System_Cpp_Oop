#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int age;
    string phoneNumber;
    double gpa;

public:
    // setters
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
    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
    // getters
    string getName()
    {
        return this->name;
    }

    int getAge()
    {
        return this->age;
    }
    string getPhoneNumber()
    {
        return this->phoneNumber;
    }
    double getGpa()
    {
        return this->gpa;
    }
    
};