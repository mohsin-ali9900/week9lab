#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{
    int size;
    char letter;
    string name;
    cout<<"Enter the name ";
    getline(cin,name);
    cout<<"Enter the letter : ";
    cin>>letter;

    int counter = name.length();
    if(name[counter-1] == letter)
    {
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}