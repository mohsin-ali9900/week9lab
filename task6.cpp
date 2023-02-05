#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{

    string name;
    cout<<"Enter the name ";
    getline(cin,name);

    int idx = 0;
    while(name[idx] != '\0')
    {
        cout<<"character "<<name[idx]<<" at index :"<<idx<<endl;

        idx++;
    }

}