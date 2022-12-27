#include <iostream>
using namespace std;
class Marks
{
    public:
    int rollno;
    string name;
    float marks;
    float totalsum,childavg;
    float classavg;
    Marks()
    {
        totalsum=0;
        childavg=0;
        classavg = 0;
        rollno = 0;
        name = ' ';
    }
    void details()
    {
        cout << "enter your name: " << endl;
        cin.ignore();
        getline(cin,name);
        cout << "enter your roll number: " << endl;
        cin >> rollno;
    }
};
class Physics : public Marks
{
    public:
    float phymarks;
    void Phy()
    {
        cout << "enter the marks of the student in physics: " << endl;
        cin >> phymarks;
    }
};
class Chemistry : public Marks
{
    public:
    float chemmarks;
    void Chem()
    {
        cout << "enter the marks of the student in chemistry: " << endl;
        cin >> chemmarks;
    }
};
class Maths : public Marks
{
    public:
    float mathmarks;
    void Math()
    {
        cout << "enter the marks of the student in maths: " << endl;
        cin >> mathmarks;
    }
};
int main()
{
    int n;
    cout << "enter the total number of students in the particular classroom: " << endl;
    cin >> n;
    Marks mainobj;
    for(int i=0;i<n;i++)
    {
        mainobj.details();
        Physics obj1;
        obj1.Phy();
        Chemistry obj2;
        obj2.Chem();
        Maths obj3;
        obj3.Math();
        mainobj.totalsum = obj1.phymarks + obj2.chemmarks + obj3.mathmarks;
        mainobj.childavg = mainobj.totalsum/3;
        cout << "the total sum of marks of student in phy,chem and maths is: " << mainobj.totalsum << endl;
        cout << "the average of " << mainobj.name << " with roll no. " << mainobj.rollno << " is "<< mainobj.childavg << endl;
        mainobj.classavg = mainobj.classavg + mainobj.childavg;
    }
    mainobj.classavg = mainobj.classavg / n;
    cout << "the average of the class is: " << mainobj.classavg << endl;
return 0;
}
