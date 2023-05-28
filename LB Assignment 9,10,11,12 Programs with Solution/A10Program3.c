//Accept N number from user check whether that numbers contains 11 in it or not.


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
        
    }

    if(Arr[iCnt]== 11)
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
    BOOL bRet = FALSE;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    bRet = Check(p , iSize);

    if(bRet == TRUE)
    {
        printf("11 is Present \n");
    }
    else
    {
        printf("11 is Absent \n");
    }
    
    free(p);

    
    return 0;

}