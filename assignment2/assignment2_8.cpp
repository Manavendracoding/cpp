#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,Ar,Ad,cos_A,inverse;

    cout << "enter the value of side a of the triangle: " << endl;
    cin >> a;
    cout << "enter the value of side b of the triangle: " << endl;
    cin >> b;
    cout << "enter the value of side c of the triangle: " << endl;
    cin >> c;
    cos_A = (pow(b,2) + pow(c,2) -pow(a,2))/(2*b*c);
    inverse = acos(cos_A);
    // this is the angle in radians
    //Ar = 1/cos((pow(b,2) + pow(c,2) -pow(a,2))/(2*b*c));
    Ad = inverse * 180/3.14;
    //aind = pow(b,2) + pow(c,2) - pow(a,2)  - 2 * b * c * cos(A);
    cout << "angle A in degree is: " << Ad << endl;
    cout << "angle A in radian is: " << inverse << endl;
    return 0;
}