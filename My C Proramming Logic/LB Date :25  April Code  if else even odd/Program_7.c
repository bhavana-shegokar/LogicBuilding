// Write a program which checks whether number is divisible by 3 and 5


/*
    Algorithm

    START
        Accept  Number as iValue
        Create one variable as bRet
        then we call the CheckDivisible() and which accept interger type of input return bool 
        Perform if((((iNo%3)==0))&&(((iNo%5)==0))) else 
        Display the value is Completely divisibal both (3&5)or not
    STOP
*/
#include<stdio.h>       // For printf and scanf
#include<stdbool.h>     // For bool data type

//////////////////////////////////////////////////////////////////////////
//
//  Function name :     CheckDivisible
//  Input :             Integer
//  Output :            Boolean
//  Description :       Checks whether input is divisible by 3 and 5     
//  Author :            Bhavana Atul shegokar
//  Date :              26/04/2023
//
//////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////////////////
// Entry Point function
//////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Please enter the number to check wether it divisible by 3 & 5: \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d : is completly Divisible by 3 and 5\n",iValue);
    }
    else
    {
       printf("%d : is not completly Divisible by 3 and 5\n",iValue);
    }

    return 0;
}
