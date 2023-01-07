#include<iostream>

using namespace std;
bool issymmetrical(int num1);     
main()
{
int num1;
int a,b,c,d;
cout<<"enter a three digit number: ";
cin>>num1;
issymmetrical(num1);
d=issymmetrical(num1);
if(d==true)
{
cout<<num1<<"  is a symmetrical number..."<<endl;
}
if(d==false)
{
cout<<num1<<"  is not a symmetrical number..."<<endl;
}
 }

bool issymmetrical(int num1)
{
int a,b,c,d;

a=num1%10;
b=num1/10;
c=num1/100;

if(a==c)
{
return true;

}
if(a!=c)
{
return false;

}



}