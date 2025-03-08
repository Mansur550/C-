//Lab task 2.1
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,55,66,99,46,68,93,100};

    cout<< "Array in normal order: ";
    for(int i=0; i<10;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    cout<<"Array in reverse order: ";
    for(int i=9; i>0 ;i--)
    {
        cout<<arr[i]<< " ";

    }
    return 0;
}
