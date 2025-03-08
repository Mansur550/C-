#include<iostream>

using namespace std;


int main()
{
    int ar1[5] = {7, 5, 7, 5, 8};
    int ar2[5]={1,2,3,4,5};
    int ar3[5]={6,7,8,9,0};
    int ar4[15];

    for(int i=0;i<5;i++)
    {
        ar4[i]=ar1[i];
    }
    for(int i=5;i<10;i++)
    {
        ar4[i]=ar2[i-5];
    }
    for(int i=10;i<15;i++)
    {
        ar4[i]=ar3[i-10];

    }
    cout<<"Marged Array: ";
    for(int i=0;i<15;i++)
    {
       cout<< ar4[i]<<" ";

    }
    return 0;
}





