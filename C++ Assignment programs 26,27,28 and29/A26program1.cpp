
//Write a program which checks whether 15th bit is ON or OFF.


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X00004000;
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

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"15th bits is ON"<<"\n";
    }
    else
    {
        cout<<"15th bits is OFF"<<"\n";
    }

    return 0;
}



/*

0000    0000    0000    0000    0000    0000    0000    0000

0000    0000    0001    0000    0100    0000    0000    0000

0       0       0       0       4      0       0       0

0X00004000
*/