//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ

//==================================================include..
#include <bits/stdc++.h>
using namespace std;
#include "controller/Controller.cpp"

//==================================================Define..

#define ll long long
//==================================================Main..
int id;
int process;

void displaySystem()
{
    cout << "\t\t************ Management System ************" << endl;
    cout << "Please Enter Your Process you need to do !" << endl;
    cout << "1 - About Students"
         << "\t\t"
         << "2 - About Courses" << endl;
    cout << "3 - About Teachers"
         << "\t\t"
         << "4 - Exit" << endl;
}
void showList(string value)
{
    cout << "\t\t************ " << value << " Management System ************" << endl;
    cout << "1 - Add " << value << "\t\t"
         << "2 - Remove " << value << endl;
    cout << "3 - Edit " << value << "\t"
         << "4 - Show " << value << endl;
    cout << "5 - Show " << value << " By ID"
         << "\t"
         << "6 - Exit" << endl;
}
void addStudent()
{
    cout << "Please Enter Student Data: " << endl;
    Student student;
    cout << "Enter Student Name :";
    string name;
    cin >> name;
    student.setName(name);
    cout << "Enter Student Age :";
    int age;
    cin >> age;
    student.setAge(age);
    cout << "Enter Student PhoneNumber :";
    string phoneNumber;
    cin >> phoneNumber;
    student.setPhoneNumber(phoneNumber);
    cout << "Enter Student GPA :";
    double gpa;
    cin >> gpa;
    student.setGpa(gpa);
    StudentController studentController;
    id = studentController.addStudent(student);
    if (id != -1)
    {
        cout << "Success Added Student With Id [" << id << "]" << endl;
    }
}
void addCourse()
{
    Course course;
    cout << "Please Enter Course Data: " << endl;
    cout << "Enter Course Name :";
    string name;
    cin >> name;
    course.setName(name);
    cout << "Enter Course hour :";
    double hour;
    cin >> hour;
    course.setHours(hour);
    CourseController courseController;
    id = courseController.addCourse(course);
    if (id != -1)
    {
        cout << "Success Added Course With Id [" << id << "]" << endl;
    }
}
void addTeacher()
{
    cout << "Please Enter Teacher Data: " << endl;
    Teacher teacher;
    cout << "Enter Teacher Name :";
    string name;
    cin >> name;
    teacher.setName(name);
    cout << "Enter Teacher Age :";
    int age;
    cin >> age;
    teacher.setAge(age);
    cout << "Enter Teacher PhoneNumber :";
    string phoneNumber;
    cin >> phoneNumber;
    teacher.setPhoneNumber(phoneNumber);
    cout << "Enter Teacher Salary :";
    double salary;
    cin >> salary;
    teacher.setSalary(salary);
    TeacherController teacherController;
    id = teacherController.addTeacher(teacher);
    if (id != -1)
    {
        cout << "Success Added Teacher With Id [" << id << "]" << endl;
    }
}
int main()
{
    cout << "\t\t****************Student Management System****************\n\n";

    while (1)
    {
        displaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            showList("Student");
            cin >> process;
            switch (process)
            {
            case 1:
                addStudent();
                break;
            case 2:
                cout << "remove student" << endl;
                break;
            case 3:
                cout << "edit student" << endl;
                break;
            case 4:
                cout << "show student" << endl;
                break;
            case 5:
                cout << "show student by id" << endl;
                break;
            case 6:
                cout << "exit to main menu...." << endl;
                break;
            default:
                cout << "invalid choose" << endl;
                break;
            }

            break;
        case 2:
            showList("Course");
            cin >> process;

            switch (process)
            {
            case 1:
                addCourse();
                break;
            case 2:
                cout << "remove course" << endl;
                break;
            case 3:
                cout << "edit course" << endl;
                break;
            case 4:
                cout << "show course" << endl;
                break;
            case 5:
                cout << "show course by id" << endl;
                break;
            case 6:
                cout << "exit to main menu...." << endl;
                break;
            default:
                cout << "invalid choose" << endl;
                break;
            }

            break;
        case 3:
            showList("Teacher");
            cin >> process;
            switch (process)
            {
            case 1:
                addTeacher();
                break;
            case 2:

                cout << "remove teacher" << endl;
                break;
            case 3:
                cout << "edit teacher" << endl;
                break;
            case 4:
                cout << "show teacher" << endl;
                break;
            case 5:
                cout << "show teacher by id" << endl;
                break;
            case 6:

                cout << "exit to main menu...." << endl;
                break;
            default:
                cout << "invalid choose" << endl;
                break;
            }
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Invalid Choose" << endl;
        }
    }
}