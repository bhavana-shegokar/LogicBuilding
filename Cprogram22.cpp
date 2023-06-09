#include<iostream>
using namespace std;
//#include<stdbool.h>

class Number
{

    private: int iBase;
             int iPower;
    public:
           Number(int X,int Y)
           {
            int iBase = X;
            cout<<"Value of iBase in constructor is :"<<iBase<<"\n";
            int iPower = Y;
            cout<<"Value of iPower in constructor is :"<<iPower<<"\n";
           }         
int CalculatePower()
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        cout<<"Iteration : "<<iCnt<<" iResult :"<<iResult<<" Power "<<iPower<<"\n";
        iResult = iResult * iBase;
        
    }
    cout<<"iResult inside CalculatePower before return :"<<iResult<<"\n";
    return iResult;
}
};
int main()
{
    int iValue1 = 0, iValue2 = 0;
    long int iRet = 0;

    cout<<"Enter base : \n";
    cin>>iValue1;           // 2
    cout<<"Enter power : \n";
    cin>>iValue2;           // 5
     Number nobj(iValue1,iValue2);
    iRet =  nobj.CalculatePower();

    cout<<"Reuslt is : "<<iRet<<"\n";

    return 0;
}

/*
Base = 2;
Power = 5;

Result = 2 * 2 * 2 * 2 * 2;

Result = 1;

Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;
Result = Result * 2;











iSum = 4 + 6 + 3 + 1 + 2
iSum = 0;

iSum = iSum + 4;
iSum = iSum + 6;
iSum = iSum + 3;
iSum = iSum + 1;
iSum = iSum + 2;

iSum contains 16









*/