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
            if(i==2 && k==1 || i==3 && k==1 || i==3 && k==2 || i==4 && k==1 || i==4 && k==2 || i==4 && k==3)
            {
                cout << "  ";
            }
            else
            {
                cout << " *";
            }
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
            if(l==5 && n==1 || l==5 && n==2 || l==5 && n==3 || l==4 && n==1 || l==4 && n==2 || l==3 && n==1)
            {
                cout << "  ";
            }
            else 
            {
                cout << " *";
            }
        }
        cout << endl ;
        space++;
    }
return 0;
}