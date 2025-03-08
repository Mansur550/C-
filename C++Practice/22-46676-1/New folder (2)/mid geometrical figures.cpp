#include<iostream>
using namespace std;




    void circle(float, float);
    void rectangle( float , float);
    void triangle( float , float);
    void square ( float,float);


int main()
{
 float x,y;int n;
  cout << "Enter number: ";
    cin >> n;

  cout << " circle"<<endl;
  cout << " rectangle "<<endl;
  cout << " triangle"<<endl;
  cout << " square"<<endl;


        if( n == 1)
            {
        circle(x,y);}
        if( n == 2)
        {
        rectangle(x,y);}

        if( n == 3)
            {
        triangle(x,y);}
        if ( n == 4)
        {

            square( x,y);
        }


return 0;
}

 //'case' 1:
void circle(float x, float y)
{   cout << "Radius of circle: ";
    cin >> x;
    float pi = 3.1416;
    float result= pi * ( x * x);

    cout<<"Area of circle : "<<result<<endl;
}
//  'case' 2:
void rectangle(float x, float y){
    cout << "Enter the length: ";cout << "Enter the width: ";


    cin  >> x; cin>> y;

   float result = x * y;
    cout << "Area of rectangle: "<< result<<endl;
}

 // 'case' 3:
void triangle ( float x, float y){

cout << "Enter the base: ";cout << "Enter the height: ";


cin >> x; cin>> y;

float result = (x * y)/2 ;

cout << " Area of triangle: "<< result<<endl;


}
 // 'case' 4:
void square( float x , float y){

 cout << "Enter the side:";
 cin >> x;
  float result  = x * x ;
 cout << "Area of square:"<<result<<endl;


}

