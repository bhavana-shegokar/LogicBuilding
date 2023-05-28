// Accept N numbers from user and accept Range, Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart, int iEnd)
{
    int iCnt = 0;
    
 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("%d \t",Arr[iCnt]);
        }
        
    }
      printf("\n");

}
int main()
{

    int iSize = 0;
    int *p = NULL; 
    int iValue1 = 0;
    int iValue2 = 0;
    int iCnt = 0;
    

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    printf("Enter The Starting Point : \n");
    scanf("%d",&iValue1);

     printf("Enter The Ending Point : \n");
    scanf("%d",&iValue2);

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    Range(p , iSize, iValue1,iValue2);

    
    free(p);

    
    return 0;

}

