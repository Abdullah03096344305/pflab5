#include<iostream>
using namespace std;
void pool();
main()
 {

int poolvolume,fp1,fp2,d,e,f;
float hour,a,b,c;
pool();



 }
void pool()
{
int poolvolume,fp1,fp2,d,e,f;
float hour,a,b,c;

cout<<"The volume in the pool in litres: ";
cin>>poolvolume;
cout<<"the flow rate of first pipe per hour: ";
cin>>fp1;
cout<<"the flow rate of second pipe per hour: ";
cin>>fp2;
cout<<"the hour that the worker is absent: ";
cin>>hour; 
a=(fp1*hour*100)/poolvolume;
b=(fp2*hour*100)/poolvolume;
c=a+b;
if(c<poolvolume)
{
d=(fp1*hour*10)/c;
e=(fp2*hour*10)/c;
cout<<"the pool is "<<c<<"% full Pipe1: "<<d<<"% Pipe 2: "<<e<<"%";
} 

if(c>poolvolume)
{
f= c-poolvolume;
cout<<"for"<<hour<<"the pool overflows with "<<f<<" liters";
}


}