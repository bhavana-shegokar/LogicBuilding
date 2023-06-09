#include<iostream>
using namespace std;
//#include<stdbool.h>


   


bool CheckDigit( int iNo,int iSearch)
{
    int iDigit = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        cout<<"Enter the digit in range 0 to 9\n";
        return false;
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
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == iSearch)
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue1;

    cout<<"Enter the digit (0 to 9)\n";
    cin>>iValue2;

     
     bRet = CheckDigit(iValue1,iValue2);

    if(bRet == true)
    {
        cout<<"Digit is present in"<<"\n";
    }
    else
    {
       cout<<"Digit is not present in "<<"\n";
    }

    return 0;
}
