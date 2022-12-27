#include <iostream>
using namespace std;
class Average
{    
    public:
    static void myavg()
    {
        float avg;
        float num1,num2,num3;
        cout << "enter the value of first number: " << endl;
        cin >> num1;
        cout << "enter the value of second number: " << endl;
        cin >> num2;
        cout << "enter the value of third number: " << endl;
        cin >> num3;
        avg = (num1 + num2 + num3)/3;
        cout << "the average is: " << avg << endl;
    }
};
int main()
{
    Average :: myavg();//scope resolution operator
return 0;
}