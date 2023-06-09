//Write a program which accept two numbers from user and Display position of common ON bits from that numbers.

#include<iostream>

using namespace std;
typedef unsigned int UINT;


void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iCount = 0;
    UINT iResult1 = 0;
    UINT iResult2 = 0;
    while ((iNo1 != 0)||(iNo2 != 0))
    {

       iResult1 = iNo1 & 1;
       iResult1 = iNo1 & 1;
       if((iResult1 == 1)&& (iResult2 == 1))
        {
            cout<<iCount<<"\t";
        }
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        iCount++;
    }
      cout<<"Display CommonBits of No1: "<<iCount<<"\n";
      cout<<"Display CommonBits of No2: "<<iCount<<"\n";
} 

int main()
{

    UINT Value1 = 0, Value2 = 0;
    UINT iRet = 0;
    cout<<"Please Enter the First Number:\n";
    cin>>Value1;

    cout<<"Please Enter the Second Number:\n";
    cin>>Value2;

    CommonBits(Value1, Value2);
    return 0;
}
