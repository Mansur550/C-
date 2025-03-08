
#include<iostream>
using namespace std;


int main()
{
    int ar[10]={90,5,23,4,5,6,9,5,7,3};
    int small=ar[0];

    for(int i=0;i<10;i++)
    {
        if (small>ar[i])
        {
            small=ar[i];
        }
    }
    cout<<small;
}
