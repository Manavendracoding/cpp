#include <iostream>
using namespace std;
class Rectangle
{
    public:
    int l,b;
    Rectangle()
    {
        l = 0;
        b = 0;
    }
    Rectangle(int len,int bread)
    {
        l = len;
        b = bread;
    }
    Rectangle(int side)
    {
        l = b = side;
    }
    void area()
    {
        float area;
        area = l * b;
        cout << "Area = " << area << endl;
    }
}; 

int main(){
    int l , b;
    Rectangle rec;
    cout << "Enter l " << endl;
    cin >> l;
    cout << "Enter b " << endl;
    cin >> b;
    Rectangle recobj1(l,b);
    cout<<"Enter Side ";
    cin >> l;
    Rectangle recobj2(l);
    rec.area();
    recobj1.area();
    recobj2.area();
    return 0;
}