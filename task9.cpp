#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{
    int size;
    string name;
    cout<<"Enter the name ";
    getline(cin,name);

    //int idx;
    //while(name[idx] != '\0')
    //{
    //    idx++;
    //}
   

    //for(int i=(idx-1); i>=0;i--)
    //{
    //    cout<<name[i]<<" ";
    //}

    int counter = name.length();
    cout<<counter;
}