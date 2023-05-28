/* Write a program which accepts string from user & accept one character.
Check weather that character is present in string or not
Input :  Marvellous Multi OS    e
Output:  TRUE
Input : Marvellous Infosystem   W
Output: FALSE
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
    int iCount = 0;
    BOOL bRet = FALSE;

    while (*str != '\0')
    {

        if ((*str == ch))
        {

            bRet = TRUE;
            break;
        }
        str++;
    }
    return bRet;
}

int main()
{

    char arr[50];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);
    if (bRet == TRUE)
    {
        printf("Character Found.......\n");
    }
    else
    {
        printf("Character NOT Found..\n");
    }
    return 0;
}