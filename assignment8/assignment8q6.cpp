#include <iostream>
using namespace std;
int main()
{
    int size = 30;
    char n[size];
    char *ptr;
    ptr = n;
    int count = 0;
    cout << "enter any sentence: " << endl;
    cin.getline(n,size);
    cout << n << endl;
    while((*ptr) != '\0')
    {
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
        {
            count++;
        }
        ptr++;
    }
    cout << "the total number of vowels appearing in this sentence is: " << count << endl;
return 0;
}