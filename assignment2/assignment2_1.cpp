#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,s,area;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    s = (a + b + c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    cout << "the area is " << area;
    return 0;
}