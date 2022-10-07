#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter any number choice: ";
    cin >> num;
    switch(num) 
    {
        case 1:
            cout << "you have entered the choice one ";
            break;
        case 2:
            cout << "you have entered the choice two ";
            break;
        default:
            cout << "invalid choice ";
    }
}