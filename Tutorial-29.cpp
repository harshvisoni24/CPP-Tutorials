#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    Complex(void);
    void printData()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex :: Complex(void) //---> This is Parameterized Constructor.
{
    a=15;
    b=12;
}
int main()
{
    Complex c;
    c.printData();
    return 0;
}

/* Characteristics of Constructors : 
1. It should declare in public section of class.
2. It can automatically invoked whenever object is created.
3. It cannot return values & do not have return type.
4. It can have default arguments.
5. We cannot refer to their address.

*/
