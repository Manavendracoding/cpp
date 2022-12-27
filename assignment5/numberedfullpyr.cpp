#include <iostream>
using namespace std;
int main()
{
    int i,j,k,m,n,l,rows;
    rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout << "  ";
        }
        for(k=i,l=i;k>=1;k--,l++)
        {
            cout << l << " ";
        }
        for(m=i-1,n=l-2;m>=1;m--,n--)
        {
            cout << n << " ";
        }
        cout << endl;
    }
return 0;
}