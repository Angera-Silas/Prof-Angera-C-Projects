#include<iostream>
using namespace std;
int main()
{
 int score;
 cout<<"Enter the student marks: ";
 cin>>score;
 if (score>=70)
 {
     cout<<"A";
 }
 else if(score>=60)
 {
     cout<<"B";
 }
 else if(score>=50)
 {
     cout<<"C";
 }
 else if(score>=40)
 {
     cout<<"D";
 }
 else
 {
     cout<<"F"<<"\nYou are supposed to register for a retake,kindly visit the deans office";
 }
}
