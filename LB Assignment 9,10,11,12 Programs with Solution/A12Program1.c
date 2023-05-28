//Accept N number from user and return the largest number.


#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength )
{
   int iCnt = 0;
   int iLargest = Arr[iCnt];
   
   
       for(iCnt = 1; iCnt < iLength; iCnt++)
       {
           if(iLargest < Arr[iCnt])
           {
              iLargest = Arr[iCnt];
           }
       }

            return iLargest;
      
   
}

int main()
{

    int iSize = 0;
    int *p = NULL; 
    int iCnt = 0;
    
    int iRet = 0;
    

    printf("Enter number of Elements :\n");
    scanf("%d",&iSize);

    

    p = (int*) malloc (iSize * sizeof(int));

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);

    }

    iRet = Maximum(p , iSize );

    printf("Lagest Number is %d \n",iRet);

   
   

    
    
    free(p);

    
    return 0;

}

