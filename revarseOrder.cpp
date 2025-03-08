#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,55,66,99,46,68,93,100};
    int i,j ,temp;
    for(i=0,j=9;i<10;i++,j--)
    {
        temp=arr[j];
       //    arr[j]= arr[i];
        arr[i]=temp;
    }
    for(i=0;i<10;i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
