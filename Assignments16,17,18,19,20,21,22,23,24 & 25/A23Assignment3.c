/* Write a program which accepts string from user & toggle the case
Input :  Marvellous Multi OS
Output:  mARVELLOUS mULTI os 

*/

#include <stdio.h>
void strTogglex(char *str)
{
    int iLength = 0;
    char *ch = str;

    while (*str != '\0')
    {

        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = (*str - 32);
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            *str = (*str + 32);
        }
        str++;
    }
}

int main()
{

    char arr[20];
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    strTogglex(arr);
    printf("The modified string is : %s \n", arr);
    return 0;
}