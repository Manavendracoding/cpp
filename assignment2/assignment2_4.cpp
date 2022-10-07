#include <iostream>
using namespace std;
int main()
{
    float a,b,c,m;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    cout << "enter the value of c:" << endl;
    cin >> c;
    m = -(a/b);
    cout << "the slope of the equation ax + by + c = 0 is: " << m;
    return 0;
}