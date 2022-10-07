#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,D;
    int real,imaginary,imaginary2;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    D = pow(b,2) - 4 * a * c;
    real = -b/(2*a);
    imaginary = ((sqrt(-D)/(2*a)));
    imaginary2 = (-sqrt(-D)/(2*a));
    cout << to_string(real) + "+" + to_string(imaginary) + 'i' << endl;
    cout << to_string(real) +  to_string(imaginary2) + 'i' << endl;
    return 0;
}