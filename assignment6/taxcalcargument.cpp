#include <iostream>
using namespace std;
void TaxCalculator(int grosssal,int savings);
int main()
{
    int g,s;
    TaxCalculator(g,s);
    return 0;
}
void TaxCalculator(int grosssal,int savings)
{
    float Taxableincome,Tax;
    cout << "enter your gross income: " << endl;
    cin >> grosssal;
    cout << "enter your savings: " << endl;
    cin >> savings;
    Taxableincome = grosssal - savings;
    if(Taxableincome<100000)
    {
        Tax = 0;
    }
    else if(Taxableincome>=100000 && Taxableincome<=200000)
    {
        Tax = 0 + 0.1 * (Taxableincome - 100000);
    }
    else if(Taxableincome>200000 && Taxableincome<=500000)
    {
        Tax = 0 + 0.1 * (Taxableincome - 100000) + 0.2 * (Taxableincome - 200000);
    }
    else if(Taxableincome > 500000)
    {
        Tax = 0 + 0.1 * (Taxableincome - 100000) + 0.2 * (Taxableincome - 200000) + 0.3 * (Taxableincome - 500000);
    }
    cout << "the tax is: " << Tax;
}