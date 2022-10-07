#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float h,k,r,s,chordl;
    cout << "enter the value of h: " << endl;
    cin >> h;
    cout << "enter the value of k: " << endl;
    cin >> k;
    cout << "enter the value of r: " << endl;
    cin >> r;
    cout << "enter the value of s: " << endl;
    cin >> s;
    chordl = 2 * sqrt(pow(r,2) - pow((s-h),2));
    cout << chordl << endl;
    return 0;
}