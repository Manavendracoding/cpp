#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
return 0;
}