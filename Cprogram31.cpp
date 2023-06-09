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
int CountEvenDigit()
{   
    int iCount = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;
     Digits Dobj(iValue);

    iRet =Dobj.CountEvenDigit();

   cout<<"Frequency of Even digits"<<" in "<<iValue<< " is "<<iRet<<"\n";

    return 0;
}
