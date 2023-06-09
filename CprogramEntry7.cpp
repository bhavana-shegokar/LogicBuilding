#include"CprogramHeader7.h" 


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;

    Number nobj1 (iValue1,iValue2);

    iRet = nobj1.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    //cout<<nobj.iNo1<<"\n";

    return 0;
}
