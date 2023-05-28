//Accept N number from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
   int iCnt = 0;
   int iSum1 = 0;
   int iSum2 = 0;
   int iDiff = 0;

   for(iCnt = 0 ; iCnt < iLength; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iSum1= iSum1 + Arr[iCnt];
      }
      if((Arr[iCnt] % 2) != 0)
      {
         iSum2 = iSum2 + Arr[iCnt];
      }

      iDiff = iSum1 -iSum2 ;
   }

      return iDiff;
}
int main()
{
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    

   printf("Elements of Array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",p[iCnt]);
    } 
    printf("\n");
 
     iRet = Difference(p, iSize);

     printf("Result is %d \n",iRet);

     free(p);





    return 0;
}