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
int main()
{
    cout << "\t\t****************Student Management System****************\n\n";

    int process;
    while (1)
    {
        displaySystem();
        cin >> process;
        switch (process)
        {
        case 1:
            showList("Student");
            cin >> process;
            if (process == 1)
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

            break;
        case 2:
            showList("Course");
            cin >> process;
            break;
        case 3:
            showList("Teacher");
            cin >> process;
            break;
        case 4:
            exit(0);
            break;

        default:
            cout << "Invalid Choose" << endl;
        }
    }
}