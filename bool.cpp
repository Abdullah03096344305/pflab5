#include<iostream>

using namespace std;
bool isgreater(int num1,int num2);
main()
{

bool isTrue;
isTrue = isgreater(8,15);
if(isTrue==true)
 {
cout<<"A is greater.."; 
 }
if(isTrue==false)
 {
cout<<"B is greater.."; 
 }
}


bool isgreater(int num1,int num2)
{
if(num1>num2)
 {
 return true;
 }

if(num1<num2)
 {
 return false ;
 }

return 0;

}