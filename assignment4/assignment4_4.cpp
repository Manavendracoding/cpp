#include <iostream>
using namespace std;
int main()
{
    int a,x,b,n;
    cout << "enter the number of terms you wish to enter: " << endl;
    cin >> n;
    int c = 0;
    int i = 0;
    int sum = 0;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        x = (a/100)*10;
        b = (a%10);
        c = x + b;
        cout << c << endl;
        sum = sum + c;
        i++;
    }
    cout << sum << endl;
return 0;
}