#include <iostream>
using namespace std;
int main()
{
    float a,b,c,m;
    cout << "enter the value of a " << endl;
    cin >> a;
    cout << "enter the value of b " << endl;
    cin >> b;
    cout << "enter the value of c " << endl;
    cin >> c;
    cout << "the equation of the line is: " << a << "x+" << "(" << b << ")" << "y+" << "(" << c << ")" << endl;
    m = -(a/b);
    cout << "the slope is " << m << endl;
    if(b == 0)
    {
        cout << "the line is vertical" << endl;
        // for line to be vertical , the slope needs to be undefined , hence denominator(b) should be equal to 0.
    }
    else
    {
        cout << "the line is not vertical" << endl;
    }
return 0;
}