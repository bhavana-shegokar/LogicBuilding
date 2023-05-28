#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
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
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter NUmber:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    if(bRet == TRUE)
    {

      printf(" No. is Even. \n");
    }
    else
    {
      printf(" No. is Odd. \n");     
    }

    return 0;
}


