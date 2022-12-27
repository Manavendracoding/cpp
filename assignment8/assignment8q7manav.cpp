#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the length of the array: " << endl;
    cin >> num;
    int myarray[num];
    int *ptr;
    ptr = myarray;
    int sum = 0;
    for(int i=0;i<num;i++)
    {
        cout << "enter the individual elements of the array: " << endl;
        cin >> *(ptr+i);
        sum = sum + *(ptr+i);
    }
    cout << "the array is: ";
    for(int i=0;i<num;i++)
    {
        cout << *(ptr+i) << " ";
    }
    cout << "\nThe sum is " << sum;
return 0;
}