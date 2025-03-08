#include<iostream>

using namespace std;


int main()
{
int i,c;


cout << " How many characters: ";
cin >> c;

cout << " Must have character: ";
char chay;
cin >> chay;

    cout <<" Write your answer: ";
char charx[c];
for ( i = 0; i < c; i++)
    {
    cin >> charx[i] ;
}


for ( i = 0; i <= c; i++)
{

    if(i==c)
        {
        cout << "Your given word "<<charx << " has "<<c<<" character and character " << chay<<endl;
    }

    }

    return 0;
}

