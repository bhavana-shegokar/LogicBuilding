/* Write a program which accepts string from user & accept one character.
Return index of first occurance of that character
Input :  Marvellous Multi OS    M
Output:  0
Input : Marvellous Infosystem   W
Output: -1
Input :  Marvellous Multi OS    e
Output:  4
*/

#include <stdio.h>

int FirstChar(char *str, char ch)
{
    int iPos = -1;
    int iCount = 0;

    while (*str != '\0')
    {

        if ((*str == ch))
        {
            iPos=iCount;
            break;
        }
        str++;
        iCount++;
    }
    return iPos;
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

    iRet = FirstChar(arr, cValue);
    printf(" %d \n", iRet);

    return 0;
}