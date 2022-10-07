#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,x;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    cout << "enter the value of d: " << endl;
    cin >> d;
    cout << "enter the value of x: " << endl;
    cin >> x;
    if(x==a)
    {
        cout << "x is equal to a" << endl;
    }
    else if(x==b)
    {
        cout << "x is equal to b" << endl;
    }
    else if(x==c)
    {
        cout << "x is equal to c" << endl;
    }
    else if(x==d)
    {
        cout << "x is equal to d" << endl;
    }
    else
    {
        cout << "x is not equal to any of the numbers" << endl;
    }
return 0;
}