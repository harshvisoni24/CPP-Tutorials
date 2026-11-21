#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cout<<"Enter number of lines : ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			for(k=1;k<=j;k++){
				cout<<"*";
			}
			//cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
