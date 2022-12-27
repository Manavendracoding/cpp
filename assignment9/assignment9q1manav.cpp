#include <iostream>
using namespace std;
class Largest3
{
    private:
    int num1,num2,num3;
    public:
    int mylargest(int num1,int num2,int num3)
    {
        if(num1 > num2 && num1 > num3)
        {
            cout << "the greatest number is: " << num1 << endl;
        }
        else if(num2 > num1 && num2 > num3)
        {
            cout << "the greatest number is: " << num2 << endl;
        }
        else if(num3 > num1 && num3 > num2)
        {
            cout << "the greatest number is: " << num3 << endl;
        }
        else
        {
            cout << "the numbers are equal: " << endl;
        }
    }
};
int main()
{
    int x,y,z;
    Largest3 obj;
    cout << "Enter the value of 1st number: " << endl;
    cin >> x;
    cout << "Enter the value of 2nd number: " << endl;
    cin >> y;
    cout << "Enter the value of 3rd number: " << endl;
    cin >> z;
    obj.mylargest(x,y,z);
    return 0;
}