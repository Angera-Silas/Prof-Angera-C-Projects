#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream doc;//declaring an object for the ofstream class.......input class
    doc.open("Welcome.txt");//opening a file for writing
    doc<<"Welcome to Prof Angera Silas Official website"<<endl;
    doc<<"This page is meant for learners of oop with c++ language"<<endl;
    doc<<"Before starting writting codes in c++ lets remind ourselves the basic concepts to programming through writing some flowcharts and algorithims"<<endl;
    doc.close();//closing the file after writting
}
