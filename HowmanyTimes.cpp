#include<bits/stdc++.h>
using namespace std; int main(){
int n=5, maxm=1000;
int a[n], b[maxm]={0};
cout<<"Enter the array elements "<<endl;
for(int i=0; i<n;
i++){ cin>>a[i];
b[a[i]] = ++b[a[i]];
}
cout<<"Occurences : "<<endl;
for(int i=0; i<maxm; i++)
    { if(b[i] != 0)
cout<<i<<" Occurs = "<<b[i]<<endl;
 }

for ( int i = 0; i < mx+1; i++ )
if ( freq[i] != 0 )
cout << i << " occurs " << freq[i] << " times "<<endl;
}

return 0;
}
