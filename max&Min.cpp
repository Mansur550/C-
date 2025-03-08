#include<iostream>
using namespace std;
int main()
{
    int ar[10]={9,2,3,4,5,6,9,5,7,3};
    int max=0,min=ar[0];
    cout<<"given Array: ";
    for(int i=0;i<10;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

     for(int i=0;i<10;i++)
    {
       if (min>ar[i])
       {
           min=ar[i];
       }
       if (max<ar[i])
       {
           max=ar[i];
       }
    }
    cout<< "Max number"<<max<<endl;
    cout<< "Min number"<<min<<endl;
    return 0;


}
