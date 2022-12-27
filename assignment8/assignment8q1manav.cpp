#include <iostream>
using namespace std;
int myfunc(int *ptr);
int main()
{
    int a;
    int *point;
    cout << "Enter any number: " << endl;
    cin >> a;
    point = &a;
    myfunc(point);
    return 0;
}
int myfunc(int *ptr)
{
    cout << "the number is " << *ptr;
}