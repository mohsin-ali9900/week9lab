#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{

    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int number[size];

    int smallest = number[0];

    for (int idx = 0; idx<size; idx++)
    {
        cin>>number[idx];
    }

    for(int i=0; i<size;i++)
    {
        if (smallest > number[i])
        {
            smallest = number[i];
        }


    }
cout<< smallest;
}