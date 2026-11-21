#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3,m4,m5;
	float percentage;
	cout<<"Enter marks of 5 subjects : ";
	cin>>m1>>m2>>m3>>m4>>m5;
	percentage=(m1+m2+m3+m4+m5)/5;
	cout<<"Percentage : "<<percentage<<endl;
	
	if(percentage>=90){
		cout<<"\nA-Grade";
	} else if(percentage>=75){
		cout<<"\nB-Grade";
	} else if(percentage>=50){
		cout<<"\nC-Grade";
	} else if(percentage>=35){
		cout<<"\nD-Grade";
	} else{
		cout<<"\nFAIL";
	}
	return 0;
}

//a=>90 b>=75 c>=50 d>=35 e=fail
