#include<iostream>
using namespace std;

main()
{

int hour,minute,a,b,c;
int min=60;

	cout<<"enter hour: ";
	cin>>hour;
	cout<<"enter minutes: ";
	cin>>minute;

if(minute<45)
 {
	minute=minute+15;
	cout<<minute<<endl;
 }
if(minute>59)
 {
	minute=0;
	minute=minute+15;
	cout<<minute;
 }
if(minute>45)
 {
	minute=minute+15;
	a=min-minute;
	b=15+a;
	c=minute+15-b;
	if(c>59)
{
	c=0;
	c=c-a;
	cout<<c<<endl;

}
 }

if(hour>23)
 {
	hour=0;
	cout<<hour;
 }




}