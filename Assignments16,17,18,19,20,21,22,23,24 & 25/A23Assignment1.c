/* Write a program which accepts string from user & convert it into lower case
Input :  Marvellous Multi OS
Output:  marvellous multi os

*/

#include <stdio.h>
void strlwrx(char *str)
{
    int iLength = 0;
    char *ch = str;

    while (*str != '\0')
    {

        if ((*str >= 'A') && (*str <= 'Z'))
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

    strlwrx(arr);
    printf("The modified string is : %s \n", arr);
    return 0;
}