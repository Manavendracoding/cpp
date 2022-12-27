#include <iostream>
using namespace std;
int main()
{
    int a,b,c,n;
    cout << "enter the number of terms you wish to find: " << endl;
    cin >> n;
    int i = 0;
    int sum = 0;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        b = a % 100;
        c = b / 10;
        cout << c << endl;
        sum = sum + c;
        i++;
    }
    cout << "the total sum of the second last digits is " << sum;
return 0;
}