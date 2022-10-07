#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout << "enter the value of 1st number: " << endl;
    cin >> a;
    cout << "enter the value of 2nd number: " << endl;
    cin >> b;
    cout << "enter the value of 3rd number: " << endl;
    cin >> c;
    cout << "enter the value of 4th number: " << endl;
    cin >> d;
    if(a >= b && a >= c && a >= d)
    {
        cout << a << " is the greatest number " << endl;
    }
    else if(b >= a && b >= c && b>=d)
    {
        cout << b << " is the greatest number " << endl;
    }
    else if(c >= a && c >= b && c >= d)
    {
        cout << c << " is the greatest number " << endl;
    }
    else if(d >= a && d >= b && d >= c)
    {
        cout << d << " is the greatest number " << endl;
    }
return 0;
}