
#include<iostream>
using namespace std;
int main()
{
int a,b;
cin>>a;
cin>>b;

cout<<"Odd number: ";
for(int i=a;i<=b;i++)
{
if(i%2!=0)
{
cout<<i<<" ";
}
}
}
