#include<iostream>
using namespace std;

//#include<stdbool.h>
class Number
{
     private: int iNo;

     public:
           Number(int X)
           {
             iNo = X;
           }


    bool CheckPrime()
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}
};

int main()
{
    int iValue = 0;
    bool bRet = false;

   cout<<"Enter number : \n";
   cin>>iValue;

    Number nobj(iValue);

    bRet =  nobj.CheckPrime();

    if(bRet == true)
    {
       cout<<"Number is Prime \n";
    }
    else
    {
        
       cout<<"Number is NOT Prime \n";
    }

    return 0;
}