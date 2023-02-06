#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
   string statement1="something";
   string statement2;

   cout<<"Enter your statement : ";

   getline(cin,statement2);
   
   cout<<statement1<<" "<<statement2;
}
