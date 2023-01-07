#include<iostream>
using namespace std;


float divide(int num3,int num4);
int isgreater(int num1,int num2);

main()
 {
int num1;
int num2;
int num3;
int num4;
int total;
float extra;
cout<<"enter 1st number: ";
cin>>num1;
cout<<"enter 2nd number: ";
cin>>num2;
total = isgreater(num1,num2);
cout<<total<<"  is the greater number!!!"<<endl;

cout<<"-------------------------------------"<<endl;
cout<<"enter 1st number: ";
cin>>num3;
cout<<"enter 2nd number: ";
cin>>num4;
extra = divide(num3,num4);
cout<<" divide is: "<<extra<<endl;

cout<<"program ends..."<<endl;
 }







float divide(int num3,int num4) 
{
float divide=num3/num4;
return divide;

}

int isgreater(int num1,int num2)
{
if(num1>num2)
{

return num1;
}

if(num2>num1)
{

return num2;
}
return 0;
}