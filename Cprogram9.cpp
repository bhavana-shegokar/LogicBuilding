#include<iostream>
//#include<stdbool.h>
using namespace std;
bool CheckEvenOdd(int iNo)
{
    if((iNo % 2)!= 0)
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

    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number : \n";
    cin>>iValue;

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        cout<<"Number is ODD"<<"\n";
    }
    else
    {
        cout<<"Number is Even"<<"\n";
    }
    

    return 0;
}