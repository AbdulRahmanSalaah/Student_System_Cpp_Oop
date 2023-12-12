//                        "بسم الله"

//    اللهمَّ صَلِّ وَسَلِّمْ وَبَارِكْ عَلَى سَيِّدِنَا مُحَمَّدٍ وَعَلَى آلِهِ عَدَدَ كَمَالِ اللهِ وَكَمَا يَلِيقُ بِكَمَالِهِ

//==================================================include..
#include <bits/stdc++.h>
using namespace std;

//==================================================Define..

#define ll long long
//==================================================Main..
int main()
{
    cout << "\t\t****************Student Management System****************\n\n";

    int process;
    while (1)
    {
        cout << "Please choose the process you want to do\n";
        cout << "1-Add Student"
             << "\t\t"
             << "2-Remove Student" << endl;
        cout << "3- Edit Student"
             << "\t"
             << "4-Show Student \n";
        cout << "5-Exit" << endl;
        cin >> process;
        switch (process)
        {
        case 1:
            cout << "Add Student" << endl;
            break;
        case 2:

            cout << "Remove Student" << endl;
            break;
        case 3:

            cout << "Edit Student" << endl;
            break;
        case 4:

            cout << "Show Student" << endl;
            break;
        case 5:
            cout << "Exit" << endl;
            exit(0);
            break;
        default:
            cout << "Please enter a valid number" << endl;
            break;
        }
    }
}