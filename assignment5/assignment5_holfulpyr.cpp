#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    int rows = 6;
    int space = rows - 1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<space;j++)
        {
            cout << " ";
        }
        for(k=0;k<=i;k++)
        {
            if(k==0 || k==i || i==rows - 1)
            {
                cout << "* ";
            }
            else
            {
                cout <<"  ";
            }
        }
        cout << endl;
        space--;
    }
}