#include <iostream>
using namespace std;
class Employee
{
    public:
    int salary,numofhrs;
    int getInfo(int s,int n)
    {
        salary = s;
        numofhrs = n;
    }
    int AddSal()
    {
        if(salary<500)
        {
            salary = salary + 10;
        }
    }
    int AddWork()
    {
        if(numofhrs > 6)
        {
            salary = salary + 5;
        }
    cout << "the total salary is: " << salary << endl;
    }
};
int main()
{
    int sal,numhrs;
    Employee obj;
    cout << "enter the salary of the employ: " << endl;
    cin >> sal;
    cout << "enter the number of hours worked by the employ: " << endl;
    cin >> numhrs;
    obj.getInfo(sal,numhrs);
    obj.AddSal();
    obj.AddWork();
return 0;
}