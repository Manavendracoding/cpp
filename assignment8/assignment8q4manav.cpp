#include <iostream>
using namespace std;
int mygreatest(int *x,int *y,int *z);
int mysmallest(int *x,int *y,int *z);
int main()
{
    int num1,num2,num3;
    int *ptr1,*ptr2,*ptr3;
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;
    mygreatest(ptr1,ptr2,ptr3);
    mysmallest(ptr1,ptr2,ptr3);
    return 0;
}
int mygreatest(int *x,int *y,int *z)
{
    if(*x > *y && *x > *z)
    {
        cout << "the greatest number is " << *x << endl;
    }
    else if(*y > *x && *y > *z)
    {
        cout << "the greatest number is " << *y << endl;
    }
    else if(*z > *y && *z > *x)
    {
        cout << "the greatest number is " << *z << endl;
    }
}
int mysmallest(int *x,int *y,int *z)
{
    if(*x < *y && *x < *z)
    {
        cout << "the smallest number is " << *x << endl;
    }
    else if(*y < *x && *y < *z)
    {
        cout << "the smallest number is " << *y << endl;
    }
    else if(*z < *y && *z < *x)
    {
        cout << "the smallest number is " << *z << endl;
    }
}
