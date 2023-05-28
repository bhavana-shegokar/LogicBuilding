// Write a Program which accept number from user and display its table in reverse.

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iResult = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iResult = (iNo * iCnt);
        printf("%d\t",iResult);
    }
          
          printf("\n");
}



int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}