/* Write a program which accepts string from user & convert it into upper case
Input :  Marvellous Multi OS
Output:  MARVELLOUS MULTI OS

*/

#include <stdio.h>
void struprx(char *str)
{
    int iLength = 0;
    char *ch = str;

    while (*str != '\0')
    {

        if ((*str >= 'a') && (*str <= 'z'))
        {
            *str = (*str - 32);
        }
        str++;
    }

}

int main()
{

    char arr[20];
    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    struprx(arr);
    printf("The modified string is : %s\n ", arr);
    return 0;
}