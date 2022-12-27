#include <iostream>
using namespace std;
int main()
{
    int a,b,n;
    int sum = 0;
    int i = 0;
    cout << "enter the number of terms: " << endl;
    cin >> n;
    while(i<n)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        b = a%2;
        if(b != 0)
        {
            sum = sum + a;
        }
        i++;
    }
    cout << sum << endl;
return 0;
}