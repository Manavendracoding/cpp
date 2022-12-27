#include <iostream>
using namespace std;
int main()
{
    int a,x,n;
    cout << "enter the number of terms you wish to find:" << endl;
    cin >> n;
    int i = 0;
    int sum = 0;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        x = (a%10);
        cout << x << endl;
        sum = sum + x;
        i++;
    }
    cout << "the total sum of the last digits is " << sum;
return 0;
}