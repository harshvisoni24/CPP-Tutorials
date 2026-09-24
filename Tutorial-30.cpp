#include <iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex(int , int );
    void printData()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(int x, int y) //---> This is Parameterized Constructor in c++.
{
    a=x;
    b=y;
}
int main()
{
    //Implicit call.
    Complex a(2,4);
    a.printData();
    
    //Explicit Call.
    Complex b = Complex(1,3);
    b.printData();
    return 0;
}
