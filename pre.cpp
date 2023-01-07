#include<iostream>
#include<cmath>
using namespace std;


main()
{
int num1;
int num2;
int num3;
int total;
int minimum;
int squareroot;
int cuberoot;
cout<<"enter number1: ";
cin>>num1;
cout<<"enter number2: ";
cin>>num2;
   total= max(num1,num2);
cout<<total<<"  is greater number!!!"<<endl;
   total=min(num1,num2);
cout<<total<<"  is minimum number!!!"<<endl;
cout<<"enter a number: ";
cin>>num3;
squareroot=  sqrt(num3);
cout<<"square root of number is  "<<squareroot<<endl;
cuberoot=cbrt(num3);
cout<<"cube root of number is  "<<cuberoot<<endl;

total= pow(3,5);
cout<<"3^5: "<<total<<endl;
}