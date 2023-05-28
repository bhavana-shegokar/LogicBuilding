#include<stdio.h>

void Display(int iNo)

{   
    int i = 0;
    
    while (iNo > i)
    {
        printf("* ");
        iNo--;
    }
     printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}