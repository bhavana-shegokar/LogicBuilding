//Accept N numbers from user and accept one another number as NO,return frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iLength ,int iNO)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            iCount ++;
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

    iRet = Frequency(p , iSize, iValue);

    printf("%d \n",iRet);

    
    
    free(p);

    
    return 0;

}