#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"Enter Value of a = ";
	cin>>a;
	cout<<"Enter Value of b = ";
	cin>>b;
	cout<<"Select Operator (+, -, *, /) : ";
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<<"Result : "<<a+b<<endl;
			break;
		case '-':
		    cout<<"Result : "<<a-b<<endl;
			break;
		case '*':
		    cout<<"Result : "<<a*b<<endl;
			break;
		case '/':
		    if(b!=0)
			    cout<<"Result : "<<a/b<<endl;
			else
			    cout<<"b cant be zero";
			break;
		default : 
		    cout<<"Invalid Operator!!!";						
			
	}
	
	return 0;
}
