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
int MinimumDigit()
{
    int iDigit = 0;
    int iMin = 9;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        if(iMin == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    return iMin;
}
};
int main()
{
    int iValue = 0;
    int iRet = 0;

   cout<<"Enter number : \n";
   cin>>iValue;
   Digit Dobj(iValue);
   iRet = Dobj.MinimumDigit();

    cout<<"Smallest digit is: "<<iRet<<"\n";

    return 0;
}
