#include<iostream>
using namespace std;


int binarySearch(int arr[], int k)
{
    int s=0;
    int e=10;
    while(s<=e)
    {
        int mid =(s+e)/2;

        if (arr[mid]==k){
            return mid;
        }

        else if (arr[mid]>k)
         {
             e=mid-1;


         }

         else {
            s=mid+1;
         }


    }
    return -1;
}

int main()
{

    int arr[10]={50,60,44,222,15,24,63,57,59,88};


    int k;
    cin>>k;

    cout<<binarySearch(arr,k)<<endl;

    return 0;
}
