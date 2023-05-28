//Accept N number from user and return frequency of even numbers.
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
   int iCnt = 0;
   int iCount = 0;
  

   for(iCnt = 0 ; iCnt < iLength; iCnt++)
   {
      if((Arr[iCnt] % 2) == 0)
      {
         iCount++;
      }
   }  
      
      return iCount;
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
 
     iRet = CountEven(p, iSize);

     printf("Result is %d \n",iRet);

     free(p);





    return 0;
}