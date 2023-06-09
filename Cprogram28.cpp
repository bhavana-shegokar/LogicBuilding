#include<iostream>
using namespace std;
class Digits
{   
    private: 
            int iNo;
    public: 
           Digits(int X)
           {
              iNo = X;
           }
int SumDigits()
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
};

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
    Digits Dobj(iValue);

    iRet =  Dobj.SumDigits();
  
    cout<<"Number of digits are : "<<iRet<<"\n";

    return 0;
}






/*
iNo = 761;

iDigit = iNo % 10       1
iNo = iNo / 10          76

iDigit = iNo % 10       6
iNo = iNo / 10          7

iDigit = iNo % 10       7
iNo = iNo / 10          0

*/

