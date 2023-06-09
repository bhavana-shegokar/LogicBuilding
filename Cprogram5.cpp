#include<iostream>
using namespace std;

class Number
{
   private:
         int iNo1;
         int iNo2;
   public:
         Number(int X,int Y)
         {
            iNo1 = X;
            iNo2 = Y;
         }   
         int Addition()
         {
            int Ans = 0;
            Ans = iNo1 + iNo2;
            return Ans;
         }   

};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    Number nobj(iValue1,iValue2);

    iRet = nobj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    //cout<<nobj.iNo1<<"\n";

    return 0;
}
