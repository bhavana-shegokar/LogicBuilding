//Accept N number from user and accept one another number as NO, return index of first occurrence of that NO.

#include<stdio.h>
#include<stdlib.h>



int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iIndex = -1;
 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            
           iIndex =  iCnt;
           break;
           
           
        }
        
    }
      return iIndex;

}

int main()
{

    int iSize = 0;
    int *p = NULL; 
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    iRet = FirstOcc(p , iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number %d \n",iRet);
    }
    else
    {
        printf("First occurrence of number is %d \n",iRet);
    }

    
    
    free(p);

    
    return 0;

}