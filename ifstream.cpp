#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream doc;
    char str[1000];
    doc.open("Welcome.txt");
    cout<<"Content of welcome message"<<endl;
    while(!doc.eof())
    {
        doc.getline(str,1000);
        cout<<str<<endl;
    }
    doc.close();
}
