#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    if(a < b && a < c && b < c)
    {
        cout << b << endl;
    }
    else if(b < a && b < c && a < c)
    {
        cout << a << endl;
    }
    else if(b < a && b < c && c < a)
    {
        cout << c << endl;
    }
    else if(a < b && c < b && c < a)
    {
        cout << a << endl;
    }
    else if(b < a && c < a && c < b)
    {
        cout << b << endl;
    }
    else if(a < b && c < b && a < c)
    {
        cout << c << endl;
    }
return 0;
}