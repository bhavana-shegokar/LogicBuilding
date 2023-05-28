/* Write a program which accepts string from user & return difference between frequency of small characters
and frequency of Capital characters
Input :  MarvellouS
Output:  6 (8 - 2)
*/
#include <stdio.h>
int Difference(char *str)
{
    int iLowerCnt = 0;
    int iUpperCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))

        {
            iLowerCnt++;
        }

        if ((*str >= 'A') && (*str <= 'Z'))

        {
            iUpperCnt++;
        }

        str++;
    }

    return (iLowerCnt - iUpperCnt);
}

int main()
{

    char arr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);
    printf("%d ", iRet);

    return 0;
}