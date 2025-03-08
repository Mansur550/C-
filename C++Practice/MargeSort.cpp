/*
#include<iostream>
using namespace std;


 void Merge(int L[], int R[], int arr[])
{
        int nl=sizeof(L) / sizeof(L[0]);
        int nr=sizeof(R) / sizeof(R[0]);
        int i=0;
        int j=0;
        int k=0;

        while (i<nl && j<nr)
        {
            if(L[i]<=R[j])
            {
                arr[k]=L[i];
                i=i+1;
            }
            else
            {
                arr[k]=R[j];
                j=j+1;
            }
            k=k+1;
        }

        while(i<nl)
        {
            arr[k]=L[i];
            i=i+1;
            k=k+1;

        }
        while(j<nr)
        {
            arr[k]=R[j];
            j=j+1;
            k=k+1;

        }



}


void mergeSort(int arr[])
{
    int n = sizeof(arr) / sizeof(arr[0]);
    if(n<2)
    {
        return;
    }
    int mid=n/2;
    int L[mid];
    int R[n-mid];
    int i;

    for(i=0; i<n; i++)
    {
        L[i]=arr[i];
    }

    for(i=mid; i<n; i++)
    {
        R[i-mid]=arr[i];
    }
    mergeSort(L);
    mergeSort(R);
    Merge(L,R,arr);
}


void printArray(int arr[], int n)
{
    for(int i=0; i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    cout<<"hi";
    int arr[]={7,2,9,4,3,8,6,1};
     int n = sizeof(arr) / sizeof(arr[0]);

     mergeSort(arr);
     cout<<"The sorted array is: ";
     printArray(arr, n);

  return 0;
}
*/

#include <iostream>
using namespace std;


void printArray(int * arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void merge(int * arr, int low, int mid, int high) {
    int i, j, k;
    int lengthLeft = mid - low + 1;
    int lengthRight = high - mid;


    int arrLeft[lengthLeft], arrRight[lengthRight];


    for (int a = 0; a < lengthLeft; a++) {
        arrLeft[a] = arr[low + a];
    }
    for (int a = 0; a < lengthRight; a++) {
        arrRight[a] = arr[mid + 1 + a];
    }


    i = 0;
    j = 0;
    k = low;
    while (i < lengthLeft && j < lengthRight) {

        if (arrLeft[i] <= arrRight[j]) {
            arr[k] = arrLeft[i];
            i++;
        } else {
            arr[k] = arrRight[j];
            j++;
        }
        k++;
    }


    while (i < lengthLeft) {
        arr[k] = arrLeft[i];
        k++;
        i++;
    }


    while (j < lengthRight) {
        arr[k] = arrRight[j];
        k++;
        j++;
    }
}


void mergeSort(int * arr, int low, int high) {
    int mid;
    if (low < high) {

        mid = (low + high) / 2;


        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main() {

    int arr[] = {9, 14, 4, 6, 5, 8, 7};


    int length = sizeof(arr) / sizeof(int);


    cout << "Array, before calling the mergeSort() : ";
    printArray(arr, length);


    mergeSort(arr, 0, length - 1);


    cout << "Array, after calling the mergeSort() : ";
    printArray(arr, length);

    return 0;
}
