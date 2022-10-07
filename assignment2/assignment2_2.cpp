#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,d,dist;
    cout << "enter the values of a: " << endl;
    cin >> a;
    cout << "enter the values of b: " << endl;
    cin >> b;
    cout << "enter the values of c: " << endl;
    cin >> c;
    cout << "enter the values of d: " << endl;
    cin >> d;
    dist = sqrt(pow((c-a),2)+pow((d-b),2));
    cout << "the distance between the two points are: " << dist;
    return 0;
}