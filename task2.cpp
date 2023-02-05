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

    for (int idx = 0; idx<size; idx++)
    {
        cin>>number[idx];
    }

    for(int i=(size-1); i>=0;i--)
    {
        cout<<number[i]<<" ";
    }


}