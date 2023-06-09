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

bool CheckPallindrome()
{
    int iDigit = 0;
    int iReverse = 0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10)+iDigit;
        iNo = iNo / 10;
    }

    if(iReverse == iTemp)
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

    cout<<"Enter number : \n";
    cin>>iValue;
    Digit Dobj(iValue);
    bRet = Dobj.CheckPallindrome();

    if(bRet == true)
    {
        cout<<iValue<<" is a pallindrome number"<<"\n";
    }
    else
    {
       cout<<iValue<<" is NOT a pallindrome number"<<"\n";
    } 
    
    return 0;
}
