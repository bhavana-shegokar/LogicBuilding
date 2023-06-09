//Write a program which accept one number from user and OFF 7th bit of that number if it is ON. Return modified number.
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{  
    UINT iMaks = 0X00000040;
    UINT  iResult = 0;

    iResult = iNo ^ iMaks;

    return iResult;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    cout<<"Enter Number :"<<"\n";
    cin>>iValue;

    iRet = OffBit(iValue);

    cout<<"Result is : "<<iRet<<"\n";

    return 0;
}