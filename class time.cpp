#include<iostream>
#include<string>
using namespace std;
class Student{
    public://Access specifier used to specify that methods(attributes & methods) of a class can be accessed from outside the class
        string name;
        int age;
        string course;//these are attributes of a class
        string school;
        int fees;
};
int main()
{
//class_name object_name
    Student obj1;//defining the first object of class time
    obj1.name = "Silas Angera";//object.attribute
    obj1.age = 22;
    obj1.course = "BBIT";
    obj1.school = "Business and Economics";
    obj1.fees = 30000;
    cout<<"\n My name is "<<obj1.name<<"\n Age "<<obj1.age<<"\n Taking "<<obj1.course<<"\n School of "<<obj1.school<<"\n Fees "<<obj1.fees<<endl;

    Student obj2;
    obj2.name = "Sharif Agoi";
    obj2.age = 21;
    obj2.course = "BMIT";
    obj2.school = "Science and Technology";
    obj2.fees = 29500;
    cout<<"\n My name is "<<obj2.name<<"\n Age "<<obj2.age<<"\n Taking "<<obj2.course<<"\n School of "<<obj2.school<<"\n Fees "<<obj2.fees<<endl;
    return 0;
}
