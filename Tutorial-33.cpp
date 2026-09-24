#include <iostream>
using namespace std;
class BankDeposit
{
    int principal, year;
    float rate, returnValue;
    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);

    void printData();
};
BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal=p;
    year=y;
    returnValue=principal;
    rate=r;
    for(int i=0;i<y;i++)
    {
        returnValue *= (1+r);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal=p;
    year=y;
    returnValue=principal;
    rate=float(r)/100;
    for(int i=0;i<y;i++)
    {
        returnValue *= (1+r);
    }
}
void BankDeposit :: printData()
{
    cout<<"Principal Amount was = "<<principal<<endl
    <<"Return value after "<<year<<endl
    << " is "<<returnValue<<endl;
}

int main()
{
    BankDeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;

    cout<<"Enter value of p y and r : ";
    cin>>p>>y>>r;

    bd1=BankDeposit(p,y,r);
    bd1.printData();
    bd2=BankDeposit(p,y,R);
    bd2.printData();

    return 0;
}
