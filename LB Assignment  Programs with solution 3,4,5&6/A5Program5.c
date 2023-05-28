// Write a program which accept N and Print first 5 Multiples of N.
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
   int iResult = 0;

   for(iCnt = 1; iCnt <= 5; iCnt ++)
   {
          iResult= iNo * iCnt;
          printf("%d\t",iResult);
        
   }

   printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}