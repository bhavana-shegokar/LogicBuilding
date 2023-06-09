#include<iostream>
using namespace std;

class Number
{

    private: 
          int iNo;
    public: 
          Number(int X)
          {
            iNo = X;
          }      
int Factorial()
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = iNo; iCnt >=1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
};
int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
    Number nobj(iValue);
    iRet = nobj.Factorial();

  cout<<"Result is :"<<iRet<<"\n";

    return 0;
}

/*
    iNo = 5;
    
    5!
    
    Factorial = 5 * 4 * 3 * 2 * 1   = 120

    Factorial = 1 * 2 * 3 * 4 * 5   = 120

*/