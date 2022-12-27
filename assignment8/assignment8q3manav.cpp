#include <iostream>
using namespace std;
int myreverse(int *ptr);
int main()
{
    int number;
    int *mypointer;
    cout << "enter any number: " << endl;
    cin >> number;
    mypointer = &number;
    myreverse(mypointer);
    return 0;
}
int myreverse(int *ptr)
{
    int rem,reverse;
    reverse = 0;
    cout << "the previous number was: " << *ptr << endl;
    while(*ptr != 0)
    {
        rem = *ptr % 10;
        reverse = reverse * 10 + rem;
        *ptr = *ptr / 10;
    }
    cout << "the reversed number is: " << reverse << endl;
}