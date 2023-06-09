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
int MaximumDigit()
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMax;
}
};
int main()
{
    int iValue = 0;
    int iRet = 0;

   cout<<"Enter number : \n";
   cin>>iValue;
   Digit Dobj(iValue);
   iRet = Dobj.MaximumDigit();

    cout<<"Largest digit is: "<<iRet<<"\n";

    return 0;
}
