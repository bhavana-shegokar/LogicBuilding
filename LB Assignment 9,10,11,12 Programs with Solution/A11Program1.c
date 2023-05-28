//Accept N numbers from user and accept one another number as NO,check whether NO is Present or not.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL Check(int Arr[],int iLength ,int iNO)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            break;
            iCount ++;
        }
        
    }
     if(Arr[iCnt] == iNO)
     {
         return TRUE;
     }
     else
     {
          return FALSE;
     }

      
}

int main()
{

    int iSize = 0;
    int *p = NULL; 
    int iCnt = 0;
    BOOL bRet = 0;
    int iValue = 0;

    printf("Enter number of Elements :\n");
    scanf("%d",&iSize);

    printf("Enter the number: \n ");
    scanf("%d",&iValue);

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    bRet = Check(p , iSize, iValue);

   if(bRet == TRUE)
   {
      printf("TRUE \n");
   }
   else
   {
      printf("FALSE \n");
   }
   

    
    
    free(p);

    
    return 0;

}