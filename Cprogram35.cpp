#include<iostream>
using namespace std;
class Digit
{
    private:
           int iNo;
    public: 
           Digit(int X)
           {
             iNo = X;
           }       

float DigitsAverage()
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iCount++;
        iNo = iNo / 10;
    }
    return ((float)iSum / (float)iCount);
}
};
int main()
{
    int iValue = 0;
    float fRet = 0.0f;

     cout<<"Enter number : \n";
     cin>>iValue;
    Digit Dobj(iValue);
   fRet = Dobj.DigitsAverage();

  cout<<"Average of digits is :"<<fRet<<"\n";

    return 0;
}
