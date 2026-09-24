#include <iostream>
using namespace std;
int count=0;
class num
{
    public:
    num(){
        count++;
        cout<<"This is time when Constructor is called : "<<count<<endl;
    }
    ~num(){
        cout<<"This is time when Destructor is called : "<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"We are inside our main function."<<endl;
    cout<<"Creating first object n1."<<endl;
    num n1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating two more objects."<<endl;
        num n2,n3;
        cout<<"Exiting this block."<<endl;
    }
    cout<<"Back to the main function."<<endl;
}
