#include<iostream>

using namespace std;
int multiply(int num);

int main()
 {
int num,a;
cout<<"ENTER A NUMBER TO MULTIPLY IT BY 5: ";
cin>>num;
a=multiply(num);
cout<<"MULTIPLIED NUMBER: "<<a;
 }


int multiply(int num)
 {
int total;
total=num*5;
return total;
 }