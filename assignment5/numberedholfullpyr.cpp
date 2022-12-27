#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,rows;
    rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout << " ";
        }
        for(l=1;l<=i;l++)
        {
            if(l==1 || i == rows)
            {
                cout << " " << l << " ";
            }
            else
            cout << " ";
        }
        for(k=1;k<i;k++)
        {
            if(k==i-1 && k<rows-1)
            {
                cout << k+1;
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
return 0;
}