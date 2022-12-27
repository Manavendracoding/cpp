#include <iostream>
using namespace std;
class Salary
{
    public:
    int finalamt;
    void totalamt(int b,int d,int h)
    {
        finalamt = b + h + ((0.1 * d) * b);
        getSal();
    }
    void totalamt(int rate,int hrs)
    {
        finalamt = rate * hrs;    
        getSal();
    }
    void totalamt(int c)
    {
        finalamt = c;
        getSal();
    }
    void getSal()
    {
        cout << "Total Salary = " << finalamt << endl;
    }
};

int main()
{
    int BA,DA,HRA,hrs,rate,consamt;
    cout << "Enter Basic " << endl;
    cin >> BA;
    cout << "Enter DA " << endl;
    cin >> DA;
    cout << "Enter HRA " << endl;
    cin >> HRA;
    Salary s;
    s.totalamt(BA,DA,HRA);
    cout<<"Enter no of hrs " << endl;
    cin >> hrs;
    cout << "Enter the rate " << endl;
    cin >> rate;
    Salary s1;
    s1.totalamt(hrs,rate);
    cout<<"Enter Consolidated amt \n";
    cin >> consamt;
    Salary s2;
    s2.totalamt(consamt);
    return 0;
}