#include <iostream>
using namespace std;
int main()
{
    int a,x,n;
    cout << "enter the number of terms you wish to find:" << endl;
    cin >> n;
    int i = 0;
    int even = 0;
    while(i<n)
    {
        cout << "enter the number " << endl;
        cin >> a;
        if(a%2==0)
        {
            even=a;
        }
        i++;
    }
    cout << "the last even number is:" << even << endl;
return 0;
}