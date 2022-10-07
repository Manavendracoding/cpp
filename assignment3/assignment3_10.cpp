#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d,x,count;
    count = 0;
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
        count = count + 1;
    }
    if(x==b)
    {
        cout << "x is equal to b" << endl;
        count = count + 1;
    }
    if(x==c)
    {
        cout << "x is equal to c" << endl;
        count = count + 1;
    }
    if(x==d)
    {
        cout << "x is equal to d" << endl;
        count = count + 1;
    }
    cout << count << endl;
return 0;
}