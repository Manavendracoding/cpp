#include <iostream>
using namespace std;
int main()
{
    float a,b,c,p,q,r,x,y;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: "<< endl;
    cin >> b;
    cout << "enter the value of c:" << endl;
    cin >> c;
    cout << "enter the value of p:" << endl;
    cin >> p;
    cout << "enter the value of q:" << endl;
    cin >> q;
    cout << "enter the value of r:" << endl;
    cin >> r;
    x = ((b * r) - (q * c))/((a*q)-(p * b));
    y = ((p * c)-(a * r))/((a*q)-(p * b));
    cout << "the point of intersection is: " << "(" << x << "," << y << ")" << endl;
    return 0; 
}