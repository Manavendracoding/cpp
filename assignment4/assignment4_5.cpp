#include <iostream>
using namespace std;
int main()
{
    int a,x,y,z,b,n;
    cout << "enter the number of terms you wish to enter: " << endl;
    cin >> n;
    int i = 0;
    int sum = 0;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        x = a % 100; // 23
        y = x / 10;
        b = x % 10;
        z = b * y;
        cout << z << endl;
        sum = sum + z;
        i++;
    }
    cout << sum << endl;
return 0;
}