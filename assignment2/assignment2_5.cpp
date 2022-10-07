#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,dist;
    cout << "enter the value of a:" << endl;
    cin >> a;
    cout << "enter the value of b:" << endl;
    cin >> b;
    cout << "enter the value of c:" << endl;
    cin >> c;
    cout << "enter the value of d:" << endl;
    cin >> d;
    cout << "enter the value of e:" << endl;
    cin >> e;
    dist = (a*c + b*d + e)/pow((pow(c,2)+pow(d,2)),0.5);
    cout << "the distance between the point (a,b) and line cx + dy + e = 0 is: " << dist;
    return 0;
}
