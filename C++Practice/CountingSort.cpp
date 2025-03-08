
#include <iostream>
using namespace std;

void countSort(int arr[], int n) {


  int m= arr[0];


  for (int i = 1; i < n; i++) {
    if (arr[i] > m)
      m = arr[i];
  }

  int counter[m];
  int output[n];



  for (int i = 0; i <= m; ++i) {
    counter[i] = 0;
  }


  for (int i = 0; i < n; i++) {
    counter[arr[i]]++;
  }


  for (int i = 1; i <= m; i++) {
    counter[i] += counter[i - 1];
  }



  for (int i = n - 1; i >= 0; i--) {
    output[counter[arr[i]] - 1] = arr[i];
    counter[arr[i]]--;
  }


  for (int i = 0; i < n; i++) {
    arr[i] = output[i];
  }
}


void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}


int main() {
  int arr[] = {4,5,6,8,4,1,2,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  countSort(arr, n);
  printArray(arr, n);
}
