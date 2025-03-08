#include<iostream>
using namespace std;
int main()
{
     int ar[10]={90,5,23,4,5,6,9,5,7,3};
     int sum=0;

     for(int i=0; i<10; i++)
     {
         sum=sum+ar[i];
     }

     cout<<"Summition is: "<<sum;

}
