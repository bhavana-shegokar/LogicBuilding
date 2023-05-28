//Accept N numbers from user and return the difference between largest and smallest number.

#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iLength )
{
   int iCnt = 0;

   int iLargest = Arr[iCnt];
   
   int iSmallest = Arr[iCnt];

   int iDifference = 0;

   for(iCnt = 1; iCnt < iLength; iCnt++)
       {
           if(iLargest < Arr[iCnt])
           {
              iLargest = Arr[iCnt];
           }
          else if(iSmallest > Arr[iCnt])
           {
              iSmallest = Arr[iCnt];
           }

            iDifference = iLargest - iSmallest;
        }  
         

         return iDifference;
       
       
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

    iRet = Difference(p , iSize );

    printf(" iDifference is %d \n",iRet);

   
   

    
    
    free(p);

    
    return 0;

}

