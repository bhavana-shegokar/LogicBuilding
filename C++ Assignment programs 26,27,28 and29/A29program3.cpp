//Write a program which accept one number from user and check whether 9th or 12th bit is on or off.
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00000900;
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    bool bRet = false;

    cout<<"Enter Number :"<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"9th or 12th bit is ON"<<'\n';
    }
    else
    {
       cout<<"9th or 12th bit is OFF"<<'\n';
    }
    

    return 0;

}