// Write a program to find factorial of given number.
 
 #include<stdio.h>

 int Factorial(int iNo)
 {
     int iCnt = 0;
     int iMul = 1;

     if(iNo < 0)
     {
        iNo = -iNo;
     }
     for(iCnt = iNo; iCnt >= 1; iCnt--)
     {
        iMul = iMul * iCnt;
     }

     return iMul;
 }

 int main()
 { 
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

   iRet = Factorial(iValue);

   printf("%d\n",iRet);


    return 0;
 }