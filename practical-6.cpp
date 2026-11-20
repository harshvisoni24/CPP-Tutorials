#include<iostream>
using namespace std;

int main()
{
	int a=5,b=10;
	//Arithmetic Operators in C++.
	cout<<"The Value of a+b = "<<a+b<<endl;
	cout<<"The Value of a-b = "<<a-b<<endl;
	cout<<"The Value of a*b = "<<a*b<<endl;
	cout<<"The Value of a/b = "<<a/b<<endl;   //we get quotient as answer
	cout<<"The Value of a%b = "<<a%b<<endl;   //we get remainder as answer
	cout<<"The Value of a++ = "<<a++<<endl;   //as value is a=5 but its post-increment so it prints a=5 but after printing its value become a=6.
	cout<<"The Value of ++a = "<<++a<<endl;   //now after post-increment a=6 but here this is pre-increment so firstly value adds and then it will display so it shows a=7.
	cout<<"The Value of a-- = "<<a--<<endl;   //same goes here a=7 after post-decrement it becomes a=6 but it shows a=7 because after displaying it gets decremented. 
	cout<<"The Value of --a = "<<--a<<endl;   //and it becomes a=6 and for pre-decrement it reduces to a=5 and then displays it.
	
	return 0;
}
