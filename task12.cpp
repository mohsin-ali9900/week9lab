#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{
    char letter;
    string name;
    cout << "Enter the name ";
    getline(cin, name);

    int counter = name.length();
    int count=0;

    for (int i = (counter - 1); i >= 0; i--)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' )
        {
            count++;
        }
    }
    cout<<"Number of vowels are : "<<count;
}