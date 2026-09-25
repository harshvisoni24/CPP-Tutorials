#include <iostream>
using namespace std;
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id=inpId;
        salary=5000;
    }
    Employee(){}
};
class Programmer : public Employee{
    public: 
    Programmer(int inpId){
        id=inpId;
    }
    int langCode=7;
    
};
int main()
{
    Employee e;
    cout<<e.salary<<endl;
    Programmer skillF(1);
    cout<<skillF.langCode;
    
    return 0;
}
