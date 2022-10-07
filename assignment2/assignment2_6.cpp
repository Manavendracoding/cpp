#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,center,g,f,radius,g2,f2,r;
    cout << "enter the value of a:" << endl;
    cin >> a; 
    cout << "enter the value of b:" << endl;
    cin >> b;
    cout << "enter the value of c:" << endl;
    cin >> c;
    g = a/2;
    f = b/2;
    g2 = -g;
    f2 = -f;
    cout << "the equation of circle is: " << "x^2 + y^2 + " << a << "x + " <<  b << "y + " << "(" << c << ")" << "=0" << endl;
    cout << "("<< g2 << "," << f2 << ")" << endl;
    r = pow((pow(g,2) + pow(f,2) - c),0.5);
    cout << "the radius is: " << r << endl;
    return 0;
}