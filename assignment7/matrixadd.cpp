#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int r;
    cout << "enter the size of the matrix: " << endl;
    cin >> r;
    int matrix1[r][r];
    int matrix2[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout << "enter the values: ";
            cin >> matrix1[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    int sum = 0;
    cout << "the sum of individual values is: " << endl;
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                sum = sum + matrix1[i][j];
            }
        }
        cout << sum;
    }
    int sum2 = 0;
    cout << "\nthe sum of the values of 2nd matrix internal elements is: " << endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout << "enter the values again: ";
            cin >> matrix2[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<r;j++)
            {
                sum2 = sum2 + matrix2[i][j];
            }
        }
        cout << sum2 << endl;
    }
    cout << "the sum of both the matrix are: " << sum + sum2 << endl;
return 0;
}