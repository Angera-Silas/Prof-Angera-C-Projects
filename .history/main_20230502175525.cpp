#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Student_info
{
private:
    float fees = 42000.00;

protected:
    string school = "ST CHRISTOPHERS BOYS HIGH SCHOOL";
    string address = "P.o Box 20215-30200\nKITALE";
    int form;
    int n;
    struct students
    {
        string fname, sname, mname, name;
        char regno[30];
        char stream[2];
        float fees_paid, balance;
        int subjects_taking;
        long agp;
        int s;
        string subject_name;
        char subject_code[10];
        int exams_taken;
        float scores[3];
        float sum = 0;
        long avg;
        long total = 0;
    };

public:
    Student_info()
    {
        cout << "Please Enter the Class" << endl;
        cin >> form;
        cout << "Enter the number of students in class" << endl;
        cin >> n;
        students stud[n];
        for (int i = 0; i < n; ++i)
        {
            cout << "ENTER INFORMATION FOR STUDENT INDEX" << (i + 1) << endl;
            cout << "Student name" << endl;
            cin >> stud[i].fname >> stud[i].mname >> stud[i].sname;
            cout << "Enter registration number" << endl;
            cin >> stud[i].regno;
            cout << "Which Stream of form " << form << "i.e w" << endl;
            cin >> stud[i].stream;
            cout << "Enter the fees paid" << endl;
            cin >> stud[i].fees_paid;
            stud[i].balance = fees - stud[i].fees_paid;
            cout << "Enter the number of subjects index taken by student" << endl;
            cin >> stud[i].subjects_taking;
            // After entering the number of subjects you will be prompted to enter details of each and every subject
            for (int s = 0; s < stud[i].subjects_taking; s++)
            {
                cout << "SUBJECT " << (s + 1) << endl;
                cout << "Subject name" << endl;
                cin >> stud[i].subject_name;
                cout << "Enter subject Code" << endl;
                cin >> stud[i].subject_code;

                cout << "Enter the number of Exams taken on this Subject" << endl;
                cin >> stud[i].exams_taken;
                // iterating to take the scores of a student per subject
                for (int j = 0; j < stud[i].exams_taken; j++)
                {
                    cout << "Paper " << (j + 1) << " Score" << endl;
                    cin >> stud[i].scores[j];
                    stud[i].sum = stud[i].sum + stud[i].scores[j];
                }
                stud[i].avg = stud[i].sum / stud[i].exams_taken;
                stud[i].total = stud[i].total + stud[i].avg;
            }
            stud[i].agp = stud[i].total / stud[i].subjects_taking;
            stud[i].name = stud[i].fname + " " + stud[i].mname + " " + stud[i].sname;
        }
        // Displaying the information entered by the user.
        for (int i = 0; i < n; i++)
        {
            cout << school << endl;
            cout << address << endl;
            cout << "|\tNAME"<< "\t" << stud[i].name << "\t\t\t\t" << endl;
            cout << "|\tADM"
                 << "\t" << stud[i].regno << "\t\t\t\t" << endl;
            cout << "|\tClASS"
                 << "\t" << form << " " << stud->stream << "\t\t\t\t" << endl;
            cout << "|\tAGP"
                 << "\t" << stud[i].agp << "\t\t\t\t|" << endl;
            cout << "|\t\tSUBJECT\tCODE\tSCORES" << endl;
            cout << "|\t\t" << stud[i].subject_name << "\t" << stud[i].subject_code << "\t" << stud[i].avg << endl;
        }
    }
};
int main(int, char **)
{
    int opt;

    cout << "Welcome to Students portal\n";
home:
    cout << "What do you wish to do\n1. Add student details \n2. Exit" << endl;
    cin >> opt;
    if (opt == 1)
    {
        Student_info Obj1;
    }
    else if (opt == 2)
    {
        exit(0);
    }
    else
    {
        goto home;
    }
    return 0;
}
