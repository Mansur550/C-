#include<iostream>
using namespace std;
int main()
{
    int ar[6]={2,4,5,7,9,5};
    int i,j,d=0, flag=0;
    for ( i=0;i<5;i++)
    {
        int d=ar[i]/2;
        for(j=0; j<=d; j++ )
        {
            if(ar[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        {
            cout<<ar[i]<<" ";
        }
    }
    return 0;
}
