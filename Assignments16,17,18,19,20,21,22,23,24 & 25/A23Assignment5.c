/* Write a program which accepts string from user & count number of white space.
Input :  MarvellousS
Output:  0
Input : Marvellous Infosystem
Output: 1
Input : Marvellous Infosystem by Piyush Manohar Khairnar
Output: 5
*/

#include <stdio.h>
int CountWhite(char *str)
{
    int iCount = 0;
    char *ch = str;

    while (*str != '\0')
    {

        if ((*str == ' ') )
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{

    char arr[100];
    int iRet = 0;
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    iRet = CountWhite(arr);
    printf("%d\n", iRet);
    return 0;
}