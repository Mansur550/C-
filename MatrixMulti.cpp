
#include<iostream>
using namespace std;
int a[3][3];
int
b[3][3];
int
c[3][3];
int main()
{
    cout << "Enter 1st matrix's element :\n";

    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter 2nd matrix's element :\n";
    for(int i=0; i<3; ++i)
         {
             for(int j=0; j<3; ++j)
{
    cin >> b[i][j];
    }
         }
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            for(int k=0; k<3; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "\nThe new multiplied matrix :\n\n";
     for(int i=0; i<3; ++i)
         {
             for(int j=0; j<3; ++j)
{
    cout << c[i][j] << " ";
    }
    cout << '\n';
         }
}
