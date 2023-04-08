#include<iostream>
#include<math.h>
long binary_to_decimal(long binary)
{
    long num,decimal = 0,digit;
    int n=0;
    num=binary;
    while(num!=0)
    {
    digit=num%10;
        if(digit==1)
        {
            decimal=decimal+pow(2,n);
        }
    n++;
    /*removing last digit*/
    num=num/10;
    }
    return decimal;
}
using namespace std;
long decimal_to_binary(long decimal)
{
    long dec, binary;
    int rem, place = 1;
    binary = 0;
    /*Passing decimal to temp variable*/
    dec = decimal;

    while(dec > 0)
    {
        rem = dec % 2;
        binary = (rem * place) + binary;
        dec =dec/ 2;
        place =place*10;
    }
    return binary;
}
int main()
{
    long binary,decimal,deci,bin;
    int a;
    cout<<"To convert Binary to Decimal Enter 1"<<endl;
    cout<<"To convert Decimal To Binary Enter 2"<<endl;
    cin>>a;
    switch(a)
    {
    case 1:
        cout<<"Enter binary number\n";
        cin>>binary;
        deci = binary_to_decimal(binary);
        cout<<"Binary Number :"<< binary << endl;
        cout<<"Decimal Number :"<< deci << endl;
        break;
    case 2:
        cout<<"Enter any decimal number:\n";
        cin>>decimal;
        bin = decimal_to_binary(binary);
        cout<<"Decimal number :"<< decimal<<  endl;
        cout<<"Binary number :"<< bin<< endl;
        break;
    default:
        cout<<"Enter a Valid Choice"<<endl;
        break;
    }
    return 0;
}
