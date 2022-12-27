#include <iostream>
using namespace std;
void taxCalculator();
int main()
{
    taxCalculator();
    return 0;
}
void taxCalculator()
{
    float grosssal,savings,taxableinc,tax;
    cout << "enter the value of gross salary: " << endl;
    cin >> grosssal;
    cout << "enter the value of savings: " << endl;
    cin >> savings;
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
    cout << "the tax is " << tax;
}
