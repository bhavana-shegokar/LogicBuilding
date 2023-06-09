//Write a program which accept one number and position  from user and on that bit. Return modified number.#include<iostream>
#include<iostream>

using namespace std;

typedef  unsigned int UINT;

UINT OnBit(UINT iNo,int iPos)
{
    UINT iMaks = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1)||(iPos > 32))
    {
        cout<<"Invalid Input \n";
        return false;
    }

    iMaks = iMaks <<(iPos - 1);
    iResult = iNo | iMaks;

     return iResult; 
    
    
    
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter The Bit Position (Range of Bits should be 1 to 32):"<<"\n";
    cin>>iBit;

    iRet = OnBit(iValue,iBit);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}

 