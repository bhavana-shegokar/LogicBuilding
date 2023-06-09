#include<iostream>
//#include<stdbool.h>
using namespace std;

class Number
{ 
    private:
            int iNo;
    public:
          Number(int X)
          {
            iNo = X;
          }        
     bool CheckEvenOdd()
        {
         if(((iNo % 3)== 0)&&((iNo % 5)==0))
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
        cout<<"Number is Completely Divisible by 3 & 5"<<"\n";
    }
    else
    {
        cout<<"Number is NOT Completely Divisible by 3 & 5"<<"\n";
    }
    

    return 0;
}