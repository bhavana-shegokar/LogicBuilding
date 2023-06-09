#include<iostream>
using namespace std;

int CountDigitFrequency(int iNo, int iSearch)
{
    int iDigit = 0;
    int iCount = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
       cout<<"Enter the digit in range 0 to 9\n";
        return 0;
    }
    if(iNo < 0)
    {
        iNo = - iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue1;


    cout<<"Enter the digit (0 to 9)\n";
    cin>>iValue2;


    iRet = CountDigitFrequency(iValue1, iValue2);

    cout<<"Frequency of Digit is in Number Are :"<<iRet<<"\n";

    return 0;
}
