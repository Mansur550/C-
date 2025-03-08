#include<iostream>
using namespace std;

int main()
{

    int mark;
    cout<<"Enter your mark : ";
    cin>>mark;
    if(mark>=90 && mark<=100)
    {
       cout<<"Your grade is : A+"<<endl;
    cout<<"Your point is : 4.00"<<endl;
    }

     if(mark>=85 && mark<=89)
    {
       cout<<"Your grade is : A"<<endl;
    cout<<"Your point is : 3.75"<<endl;
    }

     if(mark>=80 && mark<=84)
    {
       cout<<"Your grade is : B+"<<endl;
    cout<<"Your point is : 3.50"<<endl;
    }

     if(mark>=75 && mark<=79)
    {
       cout<<"Your grade is : B"<<endl;
    cout<<"Your point is : 3.25"<<endl;
    }

     if(mark>=70 && mark<=74)
    {
       cout<<"Your grade is : C+"<<endl;
    cout<<"Your point is : 3.00"<<endl;
    }

     if(mark>=65 && mark<=69)
    {
       cout<<"Your grade is : C"<<endl;
    cout<<"Your point is : 2.75"<<endl;
    }

     if(mark>=60 && mark<=64)
    {
       cout<<"Your grade is : D+"<<endl;
    cout<<"Your point is : 2.50"<<endl;
    }

     if(mark>=50 && mark<=59)
    {
       cout<<"Your grade is : D"<<endl;
    cout<<"Your point is : 2.25"<<endl;
    }

     if(mark<=49)
    {
       cout<<"Your grade is : F"<<endl;
    cout<<"Your point is : 0.00"<<endl;
    }
   return 0;
}

