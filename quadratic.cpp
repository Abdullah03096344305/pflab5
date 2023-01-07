#include<iostream>
#include<cmath>
float positivequadraticformula(float a,float b,float c);
using namespace std;

main()
{
int a=5;
int b=6;
int c=1;
float x1,x2,x1a,x2a;
float a1=(b*b)-4*a*c;
float squareroot=sqrt(a1);

x1=(-b+(squareroot));
x1a=(x1)/(2*a);
x2=(-b-(squareroot));
x2a=(x2)/(2*a);
cout<<"x= "<<x1a<<endl;
cout<<"x= "<<x2a<<endl;


}

float positivequadraticformula(float a,float b,float c)
{


}