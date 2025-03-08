
#include<iostream>
using namespace std;


int main()
{
    int ar[10]={90,-5,23,4,5,6,9,5,7,3};
    int temp;

    cout<<"the known array is: ";

    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
//Bubble sirt algorithom
    cout<<endl;
    cout<<"Array in ascending  order: ";

    for (int i=0;i<10;i++)
    {
        for(int j=i+1; j<10;j++)
        if(ar[i]>ar[j])
        {
            temp=ar[j];
            ar[j]=ar[i];
            ar[i]=temp;
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }




return 0;
}
