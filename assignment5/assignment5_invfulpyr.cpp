#include <iostream>
using namespace std;
int main()
{
    int i,j,k,rows;
    rows = 6;
    int space = rows-1;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<space;j++)
        {
            cout << " ";
        }
        for(k=0;k<i;k++)
        {
            cout << "* ";
        }
        cout << endl;
        space++;
    }
return 0;
}