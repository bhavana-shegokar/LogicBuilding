
//Write a program which checks whether  first and Last bit is ON or OFF . First bit means bit number 1 and last bit means bit number 32


#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
    UINT iMask = 0X80000001;
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
        cout<<"First and Last bits are ON"<<"\n";
    }
    else
    {
        cout<<"First and Last bits are OFF"<<"\n";
    }

    return 0;
}



/*

0000    0000    0000    0000    0000    0000    0000    0000

1000    0000    0000    0000    0000    0000    0000    0001
8         0       0       0       0       0      0        1 

0X80000001
*/