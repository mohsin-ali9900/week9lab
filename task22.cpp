#include<iostream>
using namespace std;
int main()
{
   float number[5];
   for(int i=0;i<5;i++)
   {
    cout<<"Enter the  number : ";
    cin>>number[i];
   }

   number[0]=number[0]*0.25;
   number[1]=number[1]*0.10;
   number[2]=number[2]*0.05;
   number[3]=number[3]*0.01;

   float sum=number[0]+number[1]+number[2]+number[3];

   if(sum>=number[4])
   {
    cout<<"True";
   }

   else
   cout<<"False";
   
}
