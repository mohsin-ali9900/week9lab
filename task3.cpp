#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{

    int size,num;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    cout<<"Enter the number to be matched : ";
    cin>>num;

    int number[size];

    for (int idx = 0; idx<size; idx++)
    {
        cin>>number[idx];
    }

    bool ispresent = false;
    for(int i = 0; i<size; i++)
    {
        if(num == number[i])
        {
            ispresent = true;
            break;
        }
    }

    if(ispresent == true)
    {
        cout<<"Number already exists ";
    }
    else 
    {
        cout<<"Number does not exists";
    }

}