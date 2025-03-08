
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,5,6,7,9};
    int key,n=0, flag=0;

    cin>>key;

    for(int i=0; i<5;i++){
        if(arr[i]==key){
            n=i;
            flag++;
        }
        }
        if(flag==1)
        {
            cout<<n<<endl;
        }
        else{
            cout<<"try another number "<<endl;
        }

    return 0;


}
