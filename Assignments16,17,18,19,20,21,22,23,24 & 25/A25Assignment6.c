/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   *   *   *   *   *
    *   *               *
    *       *           *
    *           *       *
    *               *   *
    *   *   *   *   *   *
                    
*/  

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
 

   
    for(i = 1; i<= iRow; i++)   
    {   
        for(j = 1; j <= iCol; j++)  
        {
            if( (i == iRow) )
            {
                printf("%d\t",j);
            }
            else if(((i==1) ))
            {
             printf("%d\t",j);
            }
            else if((j == 1))
            {
               printf("1\t");
            }
            else if((j == iCol))
            {
                 printf("5\t");
            }
            
            else if((i== j))
            {
                printf("%d ",j);
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        printf("\n");

    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}