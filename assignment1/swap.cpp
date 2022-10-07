#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout << "enter number 1 " << endl;
    cin >> a;
    cout << "enter number 2 " << endl;
    cin >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "the swapped value of a is " << a << endl;
    cout << "the swapped value of b is " << b << endl;
    return 0;
}