//Accept N number from user and return difference between frequench of even number and odd numbers.
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
   int iCnt = 0;
   int iCount1 = 0;
   int iCount2 = 0;
   int iDiff= 0;
  

   for(iCnt = 0 ; iCnt < iLength; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iCount1++;
      }
       if((Arr[iCnt] % 2) != 0)
      {
         iCount2++;
      }

      iDiff = iCount1 - iCount2;
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
 
     iRet = Frequency(p, iSize);

     printf("Result is %d \n",iRet);

     free(p);





    return 0;
}