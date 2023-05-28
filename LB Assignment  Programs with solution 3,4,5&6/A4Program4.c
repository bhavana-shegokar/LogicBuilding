// Write a program which accept three numbers and print its multiplication.

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{

    int Result = 0;
   

    if((iNo1 == 0) && (iNo2 == 0) && (iNo3 == 0))
    {
      
        return 0;
    }
    else if((iNo1 > 0) && (iNo2 > 0) && (iNo3 > 0)){

        Result = iNo1*iNo2*iNo3;
        return Result;
    }else if((iNo1 == 0) && (iNo2 > 0) && (iNo3 > 0)){
        Result=iNo2*iNo3;
        return Result;
    }
    else if((iNo1 > 0) && (iNo2 == 0) && (iNo3 > 0)){
        Result=iNo1*iNo3;
        return Result;
    }
     else if((iNo1 > 0) && (iNo2 > 0) && (iNo3 == 0)){
        Result=iNo1*iNo2;
        return Result;
    }
    else if((iNo1 > 0) && (iNo2 == 0) && (iNo3 == 0)){
        Result=iNo1;
        return Result;
    }
    else if((iNo1 == 0) && (iNo2 == 0) && (iNo3 > 0)){
        Result=iNo3;
        return Result;
    }
     else if((iNo1 == 0) && (iNo2 > 0) && (iNo3 == 0)){
        Result=iNo2;
        return Result;
    }
      
}




int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0  ,iRet = 0;


    printf("Please Enter Three Numbers : \n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

   iRet = Multiply(iValue1,iValue2,iValue3);


   printf("%d\n",iRet);

    return 0;

}


