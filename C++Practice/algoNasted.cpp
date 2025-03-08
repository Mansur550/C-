#include<iostream>
using namespace std;
int main()
{


int i,j,n,count;
count=0;
cin>>n;

for(i=0;i<n; i++)
{
    for(j=0;j<n; j++)
    {
        count=count+1;
    }
}
cout<<count;
return 0;
}

