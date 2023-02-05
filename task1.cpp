#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

main()
{
    int size;
    cout<<"Enter the size of the Array : ";
    cin>>size;

    int sum = 0;
    float average;

    int number[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"Enter the number : ";
        cin>>number[idx];
        sum = sum + number[idx];

    }
    
    average = sum/size;

    cout<<"Sum is : "<<sum<<endl;
    cout<<"Average is : "<<average;

}  