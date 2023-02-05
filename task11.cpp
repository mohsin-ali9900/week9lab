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
    cout << "Enter the letter : ";
    cin >> letter;

    int counter = name.length();
    int count=0;

    for (int i = (counter - 1); i >= 0; i--)
    {
        if (name[i] == letter)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << "true";
    }
    else
    {
        cout << "False";
    }
}