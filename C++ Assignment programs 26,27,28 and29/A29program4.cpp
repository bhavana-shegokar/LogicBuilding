/*
Write A Program which accepts one number & two position from user & Check weather bit at first or second position is ON or OFF.

Input : 100  3  7
Output: true

*/
#include <iostream>
using namespace std;


typedef unsigned int UINT;

bool CheckBit(UINT No, UINT Pos1, UINT Pos2)
{
    UINT iMask1 = 0X00000001;    // UINT iMask = 1;
    UINT iMask2 = 0X00000001;    // UINT iMask = 1;

    UINT iMask = 0;

    UINT Result1 = 0;
    UINT Result2 = 0;

    if((Pos1 < 1) || (Pos1 > 32) || (Pos2 < 1) || (Pos2 > 32))
    {
        cout<<"Invalid position, it should between 1 to 32\n";
        return false;
    }

    iMask1 = iMask1 << (Pos1 -1);
    iMask2 = iMask2 << (Pos2 -1);  

    Result1 = No & iMask1;
    Result2 = No & iMask2;

    if ((Result1 == iMask1) ||(Result2 == iMask2))
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
    UINT Value = 0;
    UINT Position1 = 0, Position2 = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>Value;

    cout<<"Enter the first position of bit\n";
    cin>>Position1;

    cout<<"Enter the second position of bit\n";
    cin>>Position2;

    bRet = CheckBit(Value, Position1, Position2);

    if (bRet == true)
    {
        cout<<"Bit at the first And Second position is ON\n";
    }
    else
    {
       cout<<"Bit at the first And Second position is OFF\n";
    }
    return 0;
}
