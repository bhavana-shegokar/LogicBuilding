#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    if(iFrequency < 0)
    {
    
      iFrequency = -iFrequency;
    }

    int i = 0;
    for(i = 1; i<=iFrequency; i++)
    {
        printf("%d ",iNo);
    }
    printf("\n");
    
}
int main()
{
    int iValue = 0;

    int iCount = 0;

    printf("Enter First No.");
    scanf("%d",&iValue);

    printf("Enter Second No.");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}