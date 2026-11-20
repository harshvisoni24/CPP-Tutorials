#include<iostream>
using namespace std;
//This is variable example in c++.
//Variable is container that stores data in c++.

int x=15;          //global variable.

void set()
{
	cout<<"Value of x = "<<x<<endl;
}

int main()
{
	//Basic Syntax for calling a variable : "data_type var_name = value_of_var" OR "data_type var_name".
	int x=9;       //local variable.
	cout<<"Value of x = "<<x<<endl;
	set();	
	
	return 0;
}
/*
Rules for calling a variable :
1. A variable can have maximum length of 1 to 255 characters.
2. A variable only contain alphabets, digits, underscore(_) and not contain any kind of special characters or reserved keywords in it.
3. Variable cannot start with a digit.
4. Not a single white space is included in variable name.
5. Variable names are case-sensitive.
*/
