#include <iostream>
using namespace std;
class Student{
    protected:
    int r_num;
    public:
    void getdata(int);
    void display(void);
};
void Student :: getdata(int r){
    r_num = r;
}
void Student :: display(){
    cout<<"Roll Number = "<<r_num<<endl;
}
class Exam : public Student{
    protected:
    float a,b;
    public:
    void getmarks(float,float);
    void displaymarks(void);
};
void Exam :: getmarks(float m1,float m2){
    m1=a;
    m2=b;
}
void Exam :: displaymarks(){
    cout<<"Marks for a = "<<a<<" b = "<<b<<endl;
}
class Result : public Exam{
    float percentage;
    public:
    void display_result(){
        display();
    displaymarks();
    cout<<"Percentage = "<<(a+b)/2<<endl;
    }
};

int main()
{
    Result r;
    r.getdata(478);
    r.getmarks(99.0,99.0);
    r.display_result();
    return 0;
}
