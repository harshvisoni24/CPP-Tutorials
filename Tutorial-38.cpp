#include <iostream>
using namespace std;
class Base
{
    int data1;//private not inheritable.
    public:
    int data2;//public can be inherited.
    void getdata(){
        data1=30;
        data2=20;
    }
    int diplaydata1(){
        return data1;
    }
    int displaydata2(){
        return data2;
    }
};
class Derived : public Base
{
    int data3;
    public:
    void process(){
        data3= data2 * displaydata1;
    }
    void display(){
        cout<<"Value of data1 = "<<displatdata1()<<" data2 = "<<data2<<" data3 = "<<data3<<endl;
    }    
};
int main()
{
    Derived d;
    d.getdata();
    d.process();
    d.diaplay();
    return 0;
}
