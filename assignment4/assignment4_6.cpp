#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int sum = 0;
    int a,x,n,y,z,t;
    cout << "enter the number of terms you wish to find: " << endl;
    cin >> n;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        x = a % 100;
        y = x / 10;
        z = x % 10;
        t = z * 10 + y;
        cout << t << endl;
        sum = sum + t;
        i++;
    }
   cout << "the sum of interchanged last 2 digits are: " << sum << endl; 
return 0;
}