//Accept N number from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
    int iCnt = 0;
    
    
 
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] <1000)
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
    int iCnt = 0;
    

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    Digits(p , iSize);

    
    free(p);

    
    return 0;

}

