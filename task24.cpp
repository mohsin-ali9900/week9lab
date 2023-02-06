#include<iostream>
using namespace std;
int main()
{
   string statement;

   cout<<"Enter the  statement : ";

   getline(cin,statement);

   int length=statement.length();

   for(int idx=0 ; idx <= length ; idx++)
   {
    if(statement[idx]=='a' || statement[idx]=='e'||statement[idx]=='i'||statement[idx]=='o' ||statement[idx]=='u')
    statement[idx]='\0';
   }

   for(int idx=0 ; idx <= length ; idx++)
   {
    cout<<statement[idx];
   }
}
