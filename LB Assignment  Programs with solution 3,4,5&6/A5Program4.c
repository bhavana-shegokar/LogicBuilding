//Write a program which accepts N from user and print all odd numbers up to N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

   for(iCnt = 1; iCnt <= (iNo); iCnt +=2)
   {
     
        printf("%d\t",iCnt);
     
   }

   printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}