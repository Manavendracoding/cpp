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
    if(a==b)
    {
        cout << "the different number is " << c << endl;
    }
    else if(b==c)
    {
        cout << "the different number is " << a << endl;
    }
    else if(a==c)
    {
        cout << "the different number is " << b << endl;
    }
    else
    {
        cout << "all three numbers are different " << endl;
    }
return 0;
}