// Accept N number from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
   int iCnt = 0;
   int iProduct = 1;
   if((Arr[iCnt] % 2 )== 0)
   {
     return 0;
   }
   
   for(iCnt = 0 ; iCnt < iLength; iCnt++)
   {
      
      if((Arr[iCnt] % 2) != 0)
      {
        printf("%d \n",Arr[iCnt]);
        
        iProduct = iProduct *  Arr[iCnt];

      }

      
   }

      return iProduct;
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
 
     iRet = Product(p, iSize);

     printf("Result is %d \n",iRet);

     free(p);





    return 0;
}
