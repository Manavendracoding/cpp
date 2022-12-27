#include <iostream>
using namespace std;
int main()
{
    int i,j,rows;
    rows = 5;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==3 && j==2 || i==4 && j==2 || i==4 && j==3)
            {
                cout << "  ";
            }
            else
            {
                cout << " " << j;
            }

        }
        cout << endl;
    }
return 0;
}