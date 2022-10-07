#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float p,q,r,a,b,c,dist;
    cout << "enter the value of p: " << endl;
    cin >> p;
    cout << "enter the value of q: " << endl;
    cin >> q;
    cout << "enter the value of r: " << endl;
    cin >> r;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    cout << "equation of line is " << a << "x+" << b << "y+" << c << endl;
    cout << "centre of circle is " << p << "," << q << endl;
    cout << "radius of circle is " << r << endl;
    dist = (a*p + b * q + c)/sqrt(pow(a,2)+pow(b,2));
    if(dist <= 0)
    {
        cout << "the circle and line intersect" << endl;
    }
    else
    {
        cout << "the circle and line do not intersect" << endl;
    }
return 0;
}