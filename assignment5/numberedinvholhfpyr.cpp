#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int rows = 0;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            if(i==4 && j==2 || i==4 && j==3 || i==3 && j==2)
            {
                cout << "  ";
            }
            else
            {
                cout << " " << j;
            }
        }
        if(i==1)
        {
            cout << " " << 1 << endl;
        }
        else
        {
            cout << " " << 5 << endl;
        }
    }
return 0;
}