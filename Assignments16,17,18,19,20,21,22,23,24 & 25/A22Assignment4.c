/* Write a program which accepts string from user & check wheather it contains vowels in it or not
and frequency of Capital characters
Input :  MarvellouS
Output:  true
Input :  Demo
Output:  true
Input :  XYZ
Output:  FALSE
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkVowel(char *str)
{
    int iVowelCnt = 0;
    BOOL bRet = FALSE;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'A') || (*str == 'e') || (*str == 'E') || (*str == 'i') || (*str == 'I') || (*str == 'o') || (*str == 'O') || (*str == 'u') || (*str == 'U'))
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

    char arr[20];
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);
    if (bRet)
    {

        printf("TRUE\n");
    }
    else
    {

        printf("FALSE\n");
    }

    return 0;
}