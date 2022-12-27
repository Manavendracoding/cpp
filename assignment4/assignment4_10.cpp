#include <iostream>
using namespace std;
int main()
{
    int a,n,b;
    cout << "enter the number of terms: " << endl;
    cin >> n;
    int i = 0;
    int count = 0;
    while(i<5)
    {
        cout << "enter the value: " << endl;
        cin >> a;
        b = a%2;
        if(b != 0)
        {
            //cout << a << endl;
            count = count + 1;
        }
    i++;
    }
    cout << "the number of odd numbers are: " << count;
return 0;
}