#include<iostream>
//#include<stdbool.h>
using namespace std;
class Number
{

    private: 
         int iNo1;
    public:
    Number(int X)
    {
        iNo1 = X;
    }
   bool CheckEvenOdd()
    {
       if((iNo1 % 2)!= 0)
       {
        return true;
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

    cout<<"Enter Number : \n";
    cin>>iValue;

    Number nobj(iValue);


    bRet = nobj.CheckEvenOdd();

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