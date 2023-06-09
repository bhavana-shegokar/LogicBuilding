//Write a Program which accept one number from user and count number of ON(1)bits in it without using % and / operator.
#include<iostream>

using namespace std;
typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
     UINT iMask = 0X00000011;
     UINT iResult = 0;
     UINT iCount = 0;

     iResult = iNo & iMask;
     if(iResult == iMask)
     {
        if(iResult == 1)
        {
            iCount++;
        }
     }
     return iCount;
   
     
}

int main()
{  
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;
    
    iRet = CountOne(iValue);
    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}