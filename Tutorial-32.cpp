#include <iostream>
using namespace std;
class Simple
{
    int data1,data2;
    public:
    Simple(int a, int b=8)
    {
        data1=a;
        data2=b;
    }
    void printData();
};
void Simple :: printData()
{
    cout<<"Entered Numbers are : "<<data1<<" and "<<data2<<endl;
}
int main(){
    Simple s(4);
    s.printData();
    return 0;
}
