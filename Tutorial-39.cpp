#include <iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
    
};
class Derived : public Base{    
};
int main(){
    Base b;
    Derived d;
    cout<<d.a;
    return 0;
}

/*
                Public      Protected    Private
1. Public       Public      Protected    Private
2. Protected    Protected   Protected    Private
3. Private      Inaccessible for all three.

*/
