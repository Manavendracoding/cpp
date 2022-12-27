#include <iostream>
using namespace std;
int main()
{
    int a,b,n;
    int sum = 0;
    int i = 1;
    cout << "enter the number of terms: " << endl;
    cin >> n;
    while(i<=n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        b = a*i;
        cout << b << endl;
        sum = sum + b;
        i++;
    }
    cout << "the sum is " << sum << endl;
return 0;
}