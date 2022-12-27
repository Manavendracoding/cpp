#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l;
    int rows = 5;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for(k=4;k>=0;k--)
    {
        for(l=1;l<=k;l++)
        {
            cout << " *";
        }
        cout << endl;
    }
return 0;
}