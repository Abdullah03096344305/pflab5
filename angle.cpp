#include<iostream>
#include<cmath>
using namespace std;


main()
{
int base;
int degrees;
float angle,total,final;

cout<<"ENTER BASE: ";
cin>>base;
cout<<"ENTER DEGREES: ";
cin>>degrees;
angle=degrees/57.2958;
total=tan(angle);
final=base*total;
cout<<"so the required height is:  "<<final;

}