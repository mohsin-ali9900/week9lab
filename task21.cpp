#include<iostream>
using namespace std;
int main()
{
     int length;
     cout<<"Enter length of numbers you want to enter : ";
     cin>>length;

     int number[length];
     int extremevalues[2];

     cout<<"Enter the fIRST number:";
     cin>>extremevalues[0];

    cout<<"Enter the LAST number:";
     cin>>extremevalues[1];

     for(int idx=0;idx<length;idx++)
     {
        cout<<"Enter the number : ";
        cin>>number[idx];
     }

     cout<<extremevalues[0]<<" ";

     for(int idx=0;idx<length;idx++)
     {
     cout<<number[idx]<<" ";
     }

     cout<<extremevalues[1];
    
}