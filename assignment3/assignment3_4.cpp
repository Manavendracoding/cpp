#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c;
    cout << "enter the value of side 1 of triangle: " << endl;
    cin >> a;
    cout << "enter the value of side 2 of triangle: " << endl;
    cin >> b;
    cout << "enter the value of side 3 of triangle: " << endl;
    cin >> c;
    if(pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2))
    {
        cout << "the triangle is right angled at A" << endl;
    }
    else
    {
        cout << "the triangle is not right angled at A" << endl;
    }
return 0;
}