#include <iostream>
using namespace std;
int main()
{

    int i,n,ar[n];
cout<<"Enter the size of array ";
cin>>n;
cout<<"Enter the elements of array "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    cout<<"Elements are: ";

      for(i=0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }


    return 0;
}
