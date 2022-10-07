#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,area,dist1,dist2,dist3,s;
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
    cout << "enter the value of c: " << endl;
    cin >> c;
    cout << "enter the value of d: " << endl;
    cin >> d;
    cout << "enter the value of e: " << endl;
    cin >> e;
    cout << "enter the value of f: " << endl;
    cin >> f;
    dist1 = sqrt(pow((c-a),2)+pow((d-b),2));
    dist2 = sqrt(pow((e-c),2)+pow((f-d),2));
    dist3 = sqrt(pow((e-a),2)+pow((f-b),2));
    s = (dist1 + dist2 + dist3)/2;
    area = sqrt(s * (s-dist1) * (s-dist2) * (s-dist3));
    cout << "area is " << area;
    return 0;
}
