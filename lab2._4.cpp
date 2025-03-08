

7
#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
a[n-1]=100;
a[4]=200;
a[0]=300;
cout<<"Array : ";
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
