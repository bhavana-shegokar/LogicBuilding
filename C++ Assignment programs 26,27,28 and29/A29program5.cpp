
//Write A Program which accepts one number & Range of Position from user & Toggle all the bits from that range.

//Input : 897     9     13
//Output: true



#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleRange(UINT No, UINT Start, UINT End)
{
    UINT Mask1 = 0XFFFFFFFF, Mask2 = 0XFFFFFFFF, Mask = 0, Result = 0;

    Mask1 = Mask1 << (Start - 1);
    Mask2 = Mask2 >> (32 - End);
    Mask = Mask1 & Mask2;

    Result = No ^ Mask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT i =0, j = 0;
    UINT iRet = 0;

    cout<<"Please enter number : \n";
    cin>>Value;

    cout<<"Enter starting bit position \n";
    cin>>i;

    cout<<"Enter ending bit position \n";
    cin>>j;

    iRet = ToggleRange(Value, i, j);
   cout<<"Updated number is : "<<iRet<<"\n";

    return 0;
}