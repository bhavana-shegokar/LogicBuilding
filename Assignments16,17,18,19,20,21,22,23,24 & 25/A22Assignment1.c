/* Write a program which accepts string from user & count number of capital characters
Input :  Marvellous Multi OS
Output:  4
*/
#include <stdio.h>
int countCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))

        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{

    char arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    iRet = countCapital(arr);
    printf("%d\n", iRet);

    return 0;
}