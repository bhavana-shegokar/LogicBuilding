//Accept N numbers from user and display summation of digits of each number.
#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iLength)
{
    int iCnt = 0;
    int sum = 0;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      sum = DigitSum(Arr[iCnt]);
      printf("%d\t",sum);
   }
   printf("\n");
}


int DigitSum(int iNo)
{
    
    int iSum = 0;
    int iDigit = 0;
     while(iNo!= 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo/ 10;
        
    }
    return iSum;     
        
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

    DigitsSum(p , iSize);

  

    
    free(p);

    
    return 0;

}

