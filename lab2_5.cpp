#include<iostream>
using namespace std;
int main()
{
int arr[100] = {1,2,3,4,5,6,7,8,9,10};
for(int i=0;i<10;i++)
{
arr[i]=arr[i+1];
}
for(int i=0;i<9;i++)
{
if(arr[i]==5)
{
for(int j=i;j<=8;j++)
{
arr[j]=arr[j+1];
}
}
}
for(int i=8;i<=9;i++)
{
arr[i]=arr[i+1];
}
cout<<"\n After Deletation";
for(int i=0;i<=6;i++)
{
cout<<arr[i]<<" ";
}
}
