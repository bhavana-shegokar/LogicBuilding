//write a program which accept one number and position from user and check Whether bit at that position is ON or OFF.If bit is one return TRUE otherwise return FALSE.

#include<iostream>
using namespace std;

typedef  unsigned int UINT;

bool ChkBit(UINT iNo,int iPos)
{
    UINT iMaks = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1)||(iPos > 32))
    {
        cout<<"Invalid Input \n";
        return false;
    }

    iMaks = iMaks <<(iPos - 1);
    iResult = iNo & iMaks;

    if(iResult == iMaks)
    {
        return true;

    }
    else
    {
        return false;
    }
    
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;
    bool bRet = false;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

    cout<<"Enter The Bit Position (Range of Bits should be 1 to 32):"<<"\n";
    cin>>iBit;

    bRet = ChkBit(iValue,iBit);
    if(bRet == true)
    {
        cout<<"Bit is ON"<<"\n";

    }
    else
    {
        cout<<"Bit is OFF"<<"\n";
    }
    

    return 0;
}

