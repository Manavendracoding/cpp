#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    int rows = 5;
    int space = rows-1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<space;j++)
        {
            cout << " ";
        }
        for(k=0;k<=i;k++)
        {
            cout << " *";
        }
        cout << endl;
        space--;
    }
    space = 0;
    for(l=rows;l>0;l--)
    {
        for(m=0;m<space;m++)
        {
            cout << " ";
        }
        for(n=0;n<l;n++)
        {
            cout << " *";
        }
        cout << endl ;
        space++;
    }
return 0;
}