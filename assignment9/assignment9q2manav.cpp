#include <iostream>
using namespace std;
class myclass
{
    public:
    int count = 0;
    void mycount()
    {
        count = count + 1;
    }
};
int main()
{
    myclass obj;
    int n;
    cout << "the inital value of the count is: " << obj.count << endl;
    cout << "enter the number of times you wish to run the loop: " << endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        obj.mycount();
    }
    cout << "the total times the function has been called is: " << obj.count << endl;
    return 0;
}