#include <iostream>
using namespace std;
int myfactorial(int *ptr);
int main()
{
    int num;
    int *mypointer;
    cout << "enter any number: " << endl;
    cin >> num;
    mypointer = &num;
    myfactorial(mypointer);
    return 0;
}
int myfactorial(int *ptr)
{
    int factorial = 1;
    for(int i=1;i<=*ptr;i++)
    {
        factorial = factorial * i;
    }
    cout << "the factorial of the number is: " << factorial;
}