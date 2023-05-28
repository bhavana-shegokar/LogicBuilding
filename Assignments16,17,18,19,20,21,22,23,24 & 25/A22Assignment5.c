/* Write a program which accepts string from user & display it in reverse order
Input :  MarvellouS
Output:  SuollevraM

*/

#include <stdio.h>
void Reverse(char *str)
{
    int iLength = 0;
    char *ch = str;
    int iCnt = 0;

    while (*str != '\0')
    {
        iLength++;
        str++;
    }


    for (iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        printf("%c", ch[iCnt]);
    }
    printf("\n");
}

int main()
{

    char arr[20];
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);
    Reverse(arr);
    return 0;
}