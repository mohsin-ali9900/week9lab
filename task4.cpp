#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{

    int size,num;
    cout<<"Enter the size of the Array : ";
    cin>>size;
    cout<<"Enter the number to multiplied : ";
    cin>>num;

    int number[size];

    for (int idx = 0; idx<size; idx++)
    {
        cin>>number[idx];
    }

    for(int i=(size-1); i>=0;i--)
    {
        cout<<number[i]*num<<" ";
    }


}