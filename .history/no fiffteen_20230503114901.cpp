#include <iostream>
using namespace std;

int main()
{
    int rows,Fib1 = 0, Fib2 = 1 ,Fib3;
    cout << "Enter the number of rows :";
    cin >> rows;
    cout << " Fibonocci Triangle :/n";
    for (int i = 1;i<=rows; i++)
    {
        Fib = 0;
        Fib = 1;
        cout << " ";
        for (int j = 1; j <= i; j++)
        {
            Fib3 = Fib1 + Fib2;
            Fib1 = Fib2;
            Fib2 = Fib3;
            cout << "x" << endl;
        }
        return 0;
    }
}
