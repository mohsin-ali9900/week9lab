#include<iostream>
using namespace std;

main()
{
int number;
cout<<"Enter number of resistors connected in serires : ";
cin>>number;

float resistance[number];
float sum=0;

for (int i = 0; i < number; i++)
{
    
    cout<<"Enter the reresistancetance : ";
    cin>>resistance[i];
     sum=sum+resistance[i];
   
}

cout<<"The total resistance is : "<<sum;

}