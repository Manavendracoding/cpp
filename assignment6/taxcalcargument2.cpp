#include <iostream>
using namespace std;
float TaxCalculator(float grosssal,float savings);
int main()
{
    float salary,saving,S;
    cout << "enter your gross salary: " << endl;
    cin >> salary;
    cout << "enter your savings: " << endl;
    cin >> saving;
    S = TaxCalculator(salary,saving);
    cout << "the tax is: " << S << endl;
    return 0;
}
float TaxCalculator(float grosssal,float savings)
{
    float tax,taxableinc;
    taxableinc = grosssal - savings;
    if (taxableinc <= 100000)
    {
        tax = 0;
    }
    else if(taxableinc >= 100000 && taxableinc <= 200000)
    {
        tax = 0 + 0.1 * (taxableinc-100000);
    }
    else if(taxableinc > 200000 && taxableinc <= 500000)
    {
        tax = 0 + 0.1 * (taxableinc-100000) + 0.2 * (taxableinc-200000);
    }
    else if(taxableinc > 500000)
    {
        tax = 0 + 0.1 * (taxableinc-100000) + 0.2 * (taxableinc-200000) + 0.3 * (taxableinc-500000);
    }
    return tax;
}