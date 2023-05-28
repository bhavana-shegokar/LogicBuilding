/* Write a program which accepts string from user, Reverse that string in place
Input :  abcd
Output:  dcba
Input : abba
Output: abba
*/
#include <stdio.h>
void StrRevX(char *str)
{
    int iLength = 0;
    char *ch = str;
    int iCnt = 0;
    char temp = '\0';

    while (*str != '\0')
    {
        iLength++;
        str++;
    }

    for (iCnt = 0; iCnt < iLength / 2; iCnt++)
    {
        // temp variable use to temporary hold the string
        temp = ch[iCnt];
        ch[iCnt] = ch[iLength - iCnt - 1];
        ch[iLength - iCnt - 1] = temp;
    }
}

int main()
{

    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);
    printf("The modifed string is : %s\n ", arr);

    return 0;
}