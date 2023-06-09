#include<iostream>

using namespace std;
//#include<stdbool.h>

typedef unsigned long int ULONG;
class Number
{

    private : int iBase;
               
              int iPower;
    public: Number(int X,int Y)   
    {   
        int iBase =X;
        int iPower = Y;
    }       
ULONG CalculatePower()
{
    int iCnt = 0;
    ULONG  iResult = 1;

    if((iBase < 0) || (iPower < 0))
    {
        return 0;
    }
    
    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    ULONG iRet = 0;

    cout<<"Enter base : \n";
    cin>>iValue1;           // 2
    cout<<"Enter power : \n";
    cin>>iValue2;  
             // 5
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