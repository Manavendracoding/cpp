#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "enter your name: " << endl;
    cin >> name;
    cout << name << endl;
    cout << "enter your name again " << endl;
    cin.ignore(256,'\n');
    getline(cin,name);
    cout << "the name is " << name << endl;
    return 0;
}