#include<iostream>
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


void DisplayFactors()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
           cout<<iCnt<<"\n";
        }
    }
}
};

int main()
{
    int iValue = 0;

   cout<<"Enter number : \n";
    cin>>iValue;

    Number nobj(iValue);

    nobj.DisplayFactors();

    return 0;
}


        /*
        iNo = 8;


        iNo % 1 == 0
        iNo % 2 == 0
        iNo % 3 == 0
        iNo % 4 == 0
        iNo % 5 == 0
        iNo % 6 == 0
        iNo % 7 == 0
        iNo % 8 == 0



        */