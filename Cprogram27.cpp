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

int CountDigits()
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;
    }
    return iCnt;
}
};

int main()
{
    int iValue = 0, iRet = 0;

   cout<<"Enter number : \n";
   cin>>iValue;
    Digits Dobj(iValue);
    iRet = Dobj.CountDigits();
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

