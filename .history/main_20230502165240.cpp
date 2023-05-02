#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Student_info
{
private:
    float fees = 42000.00;

protected:
    int form;
    int n;
    struct students
    {
        string name;
        char regno[30];
        char gender[6];
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
            cin >> stud[i].name;
            cout << "Enter registration number" << endl;
            cin >> stud[i].regno;
            cout << "Student Gender" << endl;
            cin >> stud[i].gender;
            cout << "Which Stream of form " << form << "i.e w" << endl;
            cin >> stud[i].stream;
            cout << "Enter the fees paid" << endl;
            cin >> stud[i].fees_paid;
            stud[i].balance = fees - stud[i].fees_paid;
            cout << "Enter the number of subjects index taken by student" << endl;
            cin >> stud[i].subjects_taking;

            for (int s = 0; s < stud[i].subjects_taking; s++)
            {
                cout << "SUBJECT " << (s + 1) << endl;
                cout << "Subject name" << endl;
                cin >> stud[i].subject_name;
                cout << "Enter subject Code" << endl;
                cin >> stud[i].subject_code;

                cout << "Enter the number of Exams taken on this Subject" << endl;
                cin >> stud[i].exams_taken;
                for (int j = 0; j < stud[i].exams_taken; j++)
                {
                    cout << "Paper " << (j + 1) << " Score" << endl;
                    cin >> stud[i].scores[j];
                    stud[i].sum = stud[i].sum + stud[i].scores[j];
                }
                stud[i].avg = stud[i].sum / stud[i].exams_taken;
                stud[i].total = stud[i].total + stud[i].avg;
            }
            stud->agp = stud->total / stud->subjects_taking;
        
            for (int i = 0; i < n; i++)
            {
                cout << "NAME: " << stud[i].name << endl;
                cout << "ADM:  " << stud[i].regno << endl;
                cout << "ClASS: " << form << " " << stud->stream;
                cout << "";
            }
        }
    };
    int main(int, char **)
    {
        int opt;
        Student_info Obj1;
        cout << "Welcome to Students portal\n";
    home:
        cout << "What do you wish to do\n1. Add student details \n2. Exit" << endl;
        cin >> opt;
        if (opt == 1)
        {
            Obj1.get_info();
            Obj1.dispay_info();
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
