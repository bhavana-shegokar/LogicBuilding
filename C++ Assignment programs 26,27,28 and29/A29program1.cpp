//Write a Program which accept one number from user and count number of ON(1)bits in it without using % and / operator.
#include <iostream>
using namespace std;
typedef unsigned int UINT;

int CounteOne(UINT iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {

        // If current bit is 1
        if (iNo & 1)
        {
            iCount++;
        }

        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{

    UINT Value = 0;
    UINT iRet = 0;
    cout<<"Please Enter the Number:\n";
    cin>>Value;

    iRet = CounteOne(Value);
    cout<<"The Count of ON(1) Bit is : "<<iRet<<"\n";
    return 0;
}

