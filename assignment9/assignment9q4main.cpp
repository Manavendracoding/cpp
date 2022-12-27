#include <iostream>
using namespace std;
class Volume
{
    public:
    float volume;
    float length,breadth,height;
    Volume(float len,float bread,float ht)
    {
        length = len;
        breadth = bread;
        height = ht;
    }
    void myvolume()
    {
        volume = length * breadth * height;
        cout << "the volume of the box is: " << volume << endl;
    }
};
int main()
{
    float l,b,h;
    cout << "enter the value of length: " << endl;
    cin >> l;
    cout << "enter the value of length: " << endl;
    cin >> b;
    cout << "enter the value of length: " << endl;
    cin >> h;
    Volume obj(l,b,h);
    obj.myvolume();
return 0;
}