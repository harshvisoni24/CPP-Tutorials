#include<iostream>
using namespace std;
int main()
{
	int a=5;  //its bits=101
	int b=13;  //its bits=1101
	cout<<"The value of a&b is : "<<(a&b)<<endl;  
	cout<<"The value of a|b is : "<<(a|b)<<endl;
	cout<<"The value of a^b is : "<<(a^b)<<endl;
	cout<<"The value of ~a is : "<<(~a)<<endl;
	cout<<"The value of a>>b is : "<<(a>>b)<<endl;
	cout<<"The value of a<<b is : "<<(a<<b)<<endl;
	
	return 0;
}
