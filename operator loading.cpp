#include <iostream>
using namespace std;
class Complex
{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0, double i = 0)
        {
            real = r;
            imag = i;
        }
        Complex operator - (Complex const &obj)
        {
            Complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }
        void print()
        {
            cout << real << " + i" << imag << endl;
        }
};

int main()
{
    Complex c1(5, 4), c2(2, 3);
    Complex c3 = c1 - c2;
    c3.print();
    return 0;
}

