#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the total number of values in the array: " << endl;
    cin >> n;
    int myarray[n];
    int *max;
    max = myarray;
    for(int i=0;i<n;i++)
    {
        cout << "enter the individual values of the array: " << endl;
        cin >> myarray[i];
    }
    cout << "the array is: ";
    for(int i=0;i<n;i++)
    {
        cout << myarray[i] << " ";
        if(myarray[i] > *max)
        {
            *max = myarray[i];
        }
    }
    cout << "\nthe maximum value in the data set is: " << *max << endl;
return 0;
}