#include<iostream>
using namespace std;


int main()
{
    int ar[100]={3,2,10,11,15,15,96,24,63};
    cout<<"known Array is ";
     for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    int i,pos,num;
    cout <<"Enter the position ";
    cin>>pos;
    cout<<endl;
    cout<<"Enter the value ";
    cin>>num;

    for(i=8;i>=pos;i--)
    {
        ar[i+1]=ar[i];
        ar[pos]=num;
    }

    cout<<"new array";
     for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }

    return 0;

}
