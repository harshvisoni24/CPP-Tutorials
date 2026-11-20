#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float pi=3.14;
	int num=259;
	cout<<"Used for Entering the new line."<<endl;   //endl command is used to start a new line.
	cout<<"0123456789"<<endl;                        
	cout<<setw(10)<<"OUTPUT"<<endl;                  //it sets width of the outputs.
	cout<<setprecision(10)<<pi<<endl;                //it sets precision for float values after decimal points.
	cout<<setbase(5)<<num<<endl;                     //it set base like decimal,hexadecimal....
	
	return 0;
}
