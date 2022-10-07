#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "enter the value of 1st number: " << endl;
    cin >> a;
    cout << "enter the value of 2nd number: " << endl;
    cin >> b;
    if(a > b)
    {
        cout << "output is: " << endl;
        cout << a << endl;
        cout << b << endl;
    }
    else 
    {
        cout << "output is: " << endl;
        cout << b << endl;
        cout << a << endl;
    }
return 0;
}