#include<iostream>
using namespace std;
int main()
{
int
a[7]={1,4,6,3,6,9,1}; int
ans[7], k = 0;
int n=sizeof(a)/sizeof(a[0]);
bool is_unique = true;
for (int i=0; i<n; i++)
{
int j;
for
(j=0; j<i; j++)
if (a[i] == a[j])
break; if (i == j)
ans[k++] = a[i]; else
is_unique = false;
}
if ( is_unique == true ){
cout << "Array already unique!\n";
} else { for
( int i = 0; i < k; i++
){
cout << ans[i] << " ";
}
}
}
