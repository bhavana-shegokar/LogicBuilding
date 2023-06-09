//write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number(Nibble is a group of four bits)


#include<iostream>

using namespace std;

typedef  unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMaks = 0XF000000F;
    UINT iResult = 0;

   iResult = iNo ^ iMaks;

     return iResult; 
    
    
    
}
int main()
{
    UINT iValue = 0;
   
    UINT iRet = 0;

    cout<<"Enter Number : "<<"\n";
    cin>>iValue;

   

    iRet = ToggleBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";

    return 0;
}

 