#include<iostream>
using namespace std;
int main()
{

    int arr[10]={1,5,6,4,6,8,1,8,9,2};
    int i,n,flag=0;
    for(i=0;i<10;i++)
    {
        for(n=i+1;n<10;n++)
        {
            if(arr[i]==arr[n])
            {
                flag++;
                break;
            }
        }
    }
    cout<< "Number of douplicate Element: "<<flag<<endl;
    return 0;
}
