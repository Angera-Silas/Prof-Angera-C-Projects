#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    float pv,i,n;
    float fv,b,c,d,e;
    int m,o,q;
    char v;
    cout<<" WHAT DO YOU WANT TO CALCULATE?\n For future value type F and enter \n For Present value type P and enter"<<endl;
    cout<<" For getting interest rate type in I and send \n For Getting period(time)  type T and enter"<<endl;
    cin>>v;
    switch (v)
    {
    case 'F':
        cout<<"Enter the Present Value(Pv)"<<endl;
        cin>>pv;
        cout<<"Enter interest rate(i)"<<endl;
        cin>>i;
        cout<<"Enter period(time)" <<endl;
        cin>>n;
        fv = pv * (pow(((i/100)+1),n));
        cout<<"Future Value is "<<fv<<endl;
    break;
    case 'P':
        cout<<"Enter the Future Value(Fvn)"<<endl;
        cin>>fv;
        cout<<"Enter discount rate(i)"<<endl;
        cin>>i;
        cout<<"Enter period(time)" <<endl;
        cin>>n;
        pv = fv/(pow(((i/100)+1),n));
        cout<<"The present value is "<<pv<<endl;
        break;
        case 'I':
        cout<<"Enter the Future Value(Fvn)"<<endl;
        cin>>fv;
        cout<<"Enter the Present Value(Pv)"<<endl;
        cin>>pv;
        cout<<"Enter period(time)" <<endl;
        cin>>n;
    //fv = pv*(pow(i+1),n) to remain with (pow(i+1),n)
        b = fv/pv; //fv/pv=(pow(i+1),n)
        c = log10(b);
        d = c/n;
        e = pow(10,d);
        i = (e-1)*100;
        cout<<"Interest rate is "<<i<<"%"<<endl;
    break;
    case 'T':
        cout<<"Enter the Future Value(Fvn)"<<endl;
        cin>>fv;
        cout<<"Enter the Present Value(pv)"<<endl;
        cin>>pv;
        cout<<"Enter the Interest rate(i)"<<endl;
        cin>>i;
        b = fv/pv;
        c = (i/100)+1;
        n = log10(b)/log10(c);
        cout<<"The investment period(time) is "<<n<<" years "<<endl;
    break;
    case 'FA':
    cout<<"Enter the Annuity amount"<<endl;
    cin>>pv
    break;
        
    default:
        cout<<"Enter a valid choice"<<endl;
    break;
    }
    return 0;
}
