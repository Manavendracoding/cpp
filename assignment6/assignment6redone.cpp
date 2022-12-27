#include <iostream>
using namespace std;
void txcalc(int a,int b)
{
    int t;
    //t=taxable income
    if(b>=100000)
    t=a-100000;
    else
    t=a-b;
    if(t<=100000)
    cout<<"Tax is 0";
    if(t>100000&&t<=200000)
    cout<<"Tax is "<<(t-100000)/10;
    if(t>200000&&t<=500000)
    cout<<"Tax is "<<((t-100000)/10)+((t-200000)/5);
    if(t>500000)
    cout<<"Tax is "<<((t-100000)/10)+((t-200000)/5)+(3*(t-500000)/10);

}
int main()
{
    int a,b;
    cout<<"Enter gross salary,savings: ";
    cin>>a>>b;
    txcalc(a,b);
    return 0;
}