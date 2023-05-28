//Accept N number from user and display all such elements which are divisible by 3 and 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLenght)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        if(((Arr[iCnt] % 3) == 0) && ((Arr[iCnt] % 5) == 0))
        {
            
            printf("%d \n", Arr[iCnt]);
            
        }
        
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of Elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);

    return 0;

}