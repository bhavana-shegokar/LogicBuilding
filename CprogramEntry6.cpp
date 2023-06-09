#include"CprogramHeader6.h"

int main()
{
      int iValue1 = 0;
      int iValue2 = 0;
      int iRet = 0;

      cout<<"Enter First Number :"<<"\n";
      cin>>iValue1;

      cout<<"Enter Second Number :"<<"\n";
      cin>>iValue2;

      iRet = Addition(iValue1,iValue2);

      cout<<"Addition is :"<<iRet<<"\n";
    
    return 0;
}
