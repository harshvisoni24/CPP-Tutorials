#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Value of a = "<<a<<endl;
	if(a%2==0)
	{
		cout<<"\na is even number!!"<<endl;
	}
	else 
	{
		cout<<"\na is odd number!!"<<endl;
	}
	return 0;
}
//This is if-else condition in C++.
//If condition gets true in if portion then loop gets end.
//But if condition gets false then loop continue and prints message of else condition.
