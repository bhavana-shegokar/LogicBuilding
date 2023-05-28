//Accept N number from user and return frequency of 11 from it.

#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    iRet = Frequency(p , iSize);

    printf("%d \n",iRet);

    
    
    free(p);

    
    return 0;

}