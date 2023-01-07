#include<iostream>

using namespace std;
string evenishoddish(int number);

main()
{
int number;
int a,b,c,d,e;
cout<<"enter a number:  ";
cin>>number;
evenishoddish(number);

}


string evenishoddish(int number)
{
int a,b,c,d,e,f,g;

a=number%10;
b=number/10;
c=b%10;
b=b/10;
d=b%10;
b=b/10;
e=b%10;
b=b/10;
f=b%10;
g=a+c+d+e+f;
if(g%2==0)
 {
cout<<"IT IS EVENISH";
 }
if(g%2!=0)
 {
cout<<"IT IS ODDISH";
 }




}