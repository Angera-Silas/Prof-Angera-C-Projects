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
    cout<<" WHAT DO YOU WANT TO CALCULATE?\n For future value type F and enter to proceed \n For Present value type P and enter to proceed"<<endl;
    cout<<" For getting interest rate type in I and enter to proceed \n For Getting period(time)  type T and enter to proceed \n For Ordinary annuity press O and enter to proceed"<<endl;
    cout<<" For Present Value of Ordinary Annity type A and Enter \n For Future VaAnnity due type D and Enter to proceed"<<endl;
    cin>>v;
    switch (v)
    {
    case 'F':
    //this section is used to calculate future value
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
    case 'O':
        cout<<"Enter the Annuity amount(Pv/A)"<<endl;
        cin>>pv;
        cout<<"Enter the interest rate(i)"<<endl;
        cin>>i;
        cout<<"Enter the Period(time)"<<endl;
        cin>>n;
        b = pow(((i/100)+1),n);
        c = (b-1)/(i/100);
        fv = c*pv;
        cout<<"The future value of Ordinary annuity is "<<fv<<endl;
    break;
     //now to calculate the present value of ordinary annuity
    case 'A':
        cout<<"Enter the future value(Fvn)"<<endl;
        cin>>fv;
        cout<<"Enter the dicount rate(i)"<<endl;
        cin>>i;
        cout<<"Enter the period(time)"<<endl;
        cin>>n;
        b = pow(((i/100)+1),-n);
        c = (1-b)/(i/100);
        pv = fv*c;
        cout<<"The present Value of Ordinary annuity is "<<pv<<endl;
    break;
    default:
        cout<<"Enter a valid choice"<<endl;
    break;
    }
    return 0;
}
