A1Program4_3.c#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int i = 0;
    for(i = 1; i<=iFrequency; i++)
    {
        printf("%d \n",iNo);
    }
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