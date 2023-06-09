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
void DisplayDigits()
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
};

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    Digit Dobj(iValue);
    Dobj.DisplayDigits();

    return 0;
}






/*
iNo = 761;

iDigit = iNo % 10       1
iNo = iNo / 10          76

iDigit = iNo % 10       6
iNo = iNo / 10          7

iDigit = iNo % 10       7
iNo = iNo / 10          0

*/

