
/* Write a program which accepts string from user & accept one character.
Return frequency of that character
Input :  Marvellous Multi OS    M
Output:  2
Input : Marvellous Infosystem   W
Output: 0
*/

#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;

    while (*str != '\0')
    {

        if ((*str == ch))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{

    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);
    printf(" %d \n", iRet);

    return 0;
}