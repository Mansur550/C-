#include<iostream>
using namespace std;
int main()
{
    int arr[100] = {1,2,3,4,5};
    int n,i,pos,j,flag=0;
    cout<<"Delete this: ";
    cin>>n;
    for(i=0;i<5;i++)
    {
        if(n==arr[i])
        {
            flag=1;
            for(j=i;j<5;j++)
            {
                arr[j] = arr[j+1];

            }



        }
    }
    if(flag==0)
    {
        cout<<"\nInvalid";
    }
    else{
        cout<<"\nAfter deletion: "<<endl;
        for(i=0;i<4;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}
