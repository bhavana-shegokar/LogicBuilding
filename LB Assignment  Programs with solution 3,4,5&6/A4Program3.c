// Write a program which accept two numbers and check whether number are equal or not.

#include<stdio.h>
#include <stdbool.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1, int iNo2)
{

    
    if(iNo1 == iNo2)
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
    int iValue1 = 0,iValue2 = 0;
    bool bRet = FALSE;

    printf("Please Enter Two Numbers : \n");
    scanf("%d %d",&iValue1,&iValue2);

    ;

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet == TRUE)
    {
        printf("Equal \n");

    } 
    else
    {
       printf("Not Equal \n");
    }
    
    return 0;
}