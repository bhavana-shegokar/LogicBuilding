/*
    Steps to create the application

    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the written program 

*/

// Write a program to divide two numbers

/*
    Algorithm

    START
        Accept First Number as No1
        Accept Second Number as No2
        Create one variable as ANS
        Perform Division of No1 and No2
        Store the Division into variable ANS
        Display the value of ANS
    STOP
*/

/////////////////////////////////////////////////////////////////////////////////
//
// Problem Statement : Write a program to divide two numbers
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Divide
//  Input :         integer, integer
//  Output :        integer
//  Description :   Performs Division of 2 numbers
//  Author :        Bhavana Atul Shegokar
//  Date :          24/04/2023
//
/////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;
    return iAns;
}
/////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
/////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is :%d\n",iRet);
    return 0;
}