#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int Partition(int arr[], int l ,int r)
{

    int counter;
    int pivot=arr[r];
    int i=l-1;


    for(int j=l;j<r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
            counter++;
        }
    }
    swap(arr,i+1,r);
    counter++;
    return i+1;

    cout<<counter;

}


void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi=Partition(arr,l,r);
        quickSort(arr, l, pi-1);
        quickSort(arr, pi+1,r);
    }
}


int main()
{
    int n=10;
    int arr[n]={2,4,6,7,8,19,34,1,0,5};
    quickSort(arr, 2, 10-1);

    for (int i=0; i<n; i++)
    {
         cout <<arr[i]<<" ";
    }
    cout<<endl;




    return 0;
}
