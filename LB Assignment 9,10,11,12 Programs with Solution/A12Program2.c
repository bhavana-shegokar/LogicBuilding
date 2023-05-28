//Accept N number from user and return the smallest number.


#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iLength )
{
   int iCnt = 0;
   int iSmallest = Arr[iCnt];
   
   
       for(iCnt = 1; iCnt < iLength; iCnt++)
       {
           if(iSmallest > Arr[iCnt])
           {
              iSmallest = Arr[iCnt];
           }

       
       }  
       
         return iSmallest;
      
   
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

    iRet = Minimum(p , iSize );

    printf("Smallest Number is %d \n",iRet);

   
   

    
    
    free(p);

    
    return 0;

}

