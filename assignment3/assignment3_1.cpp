#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout << "enter the value of 1st number: " << endl;
    cin >> a;
    cout << "enter the value of 2nd number: " << endl;
    cin >> b;
    cout << "enter the value of 3rd number: " << endl;
    cin >> c;
    if(a >= b && a >= c)
    {
        cout << a << " is the greatest number " << endl;
    }
    else if(b >= a && b >= c)
    {
        cout << b << " is the greatest number " << endl;
    }
    else if(c >= a && c >= b)
    {
        cout << c << " is the greatest number " << endl;
    }
    else
    {
        cout << " the numbers are equal " << endl;
    }
return 0;
}