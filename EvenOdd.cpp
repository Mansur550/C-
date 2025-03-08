#include<iostream>
using namespace std;
int main()
{
    int ar[10]={1,2,3,4,5,6,9,5,7,3};
    int i,e=0,o=0,even[10],odd[10];

    cout<<"given Array: ";
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

     for( i=0;i<10;i++)
    {
        if(ar[i]%2==0)
            {even[e]=ar[i];
            e++;
            }
        else
        {
            odd[o]=ar[i];
            o++;
            }
    }
    cout<<"Even Elements are: ";
    for(int i=0;i<e;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;

    cout<<"odd Elements are: ";
    for(int i=0;i<o;i++)
    {
        cout<<odd[i]<<" ";
    }


 return 0;
}
