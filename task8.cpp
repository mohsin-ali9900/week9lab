#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{

    string name;
    cout<<"Enter the name ";
    getline(cin,name);

    int counter = 0;

    int idx = 0;
    while(name[idx] != '\0')
    {
        counter++;
        idx++;   // or we can simply print this by cout idx
    }
    
    if(counter%2 == 0)
    {
        cout<<"Even";

    }
    else{cout<<"Odd";}
}