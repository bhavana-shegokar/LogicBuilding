/* Write a program which accepts string from user & display digit from it.
Input :  marve89llous121
Output:  89121
Input : Demo
Output: 

*/

#include <stdio.h>
void DisplayDigit(char *str)
{
    int iLength = 0;
    char *ch = str;

    while (*str != '\0')
    {

        if ((*str >= '0') && (*str <= '9'))
        {
            printf("%c\t",*str);
        }
        str++;
    }
    printf("\n");
}

int main()
{

    char arr[20];
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    DisplayDigit(arr);
    return 0;
}