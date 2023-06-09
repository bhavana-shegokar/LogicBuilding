#include<iostream>
using namespace std;

// #include<stdbool.h>
class Number
{
      private: int iNo;

      public:
           Number(int X)
           {
             iNo = X;
           }
bool CheckPrime()
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }
    if(iCnt == (iNo/2)+1)
    {
        return true ;
    }
    else
    {
        return false;
    }
}
};
int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;
    Number nobj(iValue);
    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }

    return 0;
}