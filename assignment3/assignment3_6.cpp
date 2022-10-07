#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,D,x1,x2,x3,x,x4,x5,real,imaginary,imaginary2;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    cout << "enter the value of c " << endl;
    cin >> c;
    cout << "the quadratic equation is: " << "\n" << a << "x^2+" << "(" << b << ")" << "x+" << "(" << c << ")" << "= 0" <<  endl;
    D = pow(b,2) - (4 * a *c);
    if(D > 0)
    {
        x1 = (-1 * b + sqrt(D))/(2*a);
        x2 = (-1 * b - sqrt(D))/(2*a);
        cout << "the first root is: " << x1 << endl;
        cout << "the second root is: " << x2 << endl;
    }
    else if(D==0)
    {
        x = ((-b + sqrt(D)) / (2*a));
        cout << "the root is: " << x << endl;
    }
    else if(D<0)
    {
        cout << "Roots are imaginary." << '\n';
        real = -b / 2*a;
        imaginary = ((sqrt(-D)) / 2*a);
        imaginary2 = (-(sqrt(-D))/2*a);
        cout << "Real root is: " << real << '\n' << "Imaginary root is: " << imaginary << endl;
        cout << "alternative imaginary root is: " << imaginary2 << endl;
    }
return 0;
}