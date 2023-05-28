//Write a program which accept total marks & obtained marks from user and calculate percentage.
#include<stdio.h>

float Percentage( int Total, int Obtained)
{

   float fPercentage = 0.0f;

   if(Obtained == 0)
   {
     return 0.0;
   }

   fPercentage =(((float)Obtained / (float)Total) )* 100;

   return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

   printf("Please Enter Total Marks : \n");
   scanf("%d",&iValue1);


   printf("Please Enter Obtained Marks : \n");
   scanf("%d",&iValue2);

   fRet = Percentage(iValue1,iValue2);

   printf("%f\n",fRet);

   return 0;


}