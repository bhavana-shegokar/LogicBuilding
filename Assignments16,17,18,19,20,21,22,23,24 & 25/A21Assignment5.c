/* Accept character from user and display it's ASCII value in Decimal, Octal, Hexadecimal format
Input :   A
Output:   Decimal 65
          Octal   0101
          Hexadecimal 0X41
Input : d
Output: FALSE
*/
#include <stdio.h>

void Display(char ch)
{
    printf("Decimal     : %d\n", ch);
    printf("Octal       : %o\n", ch);
    printf("Hexadecimal : %x\n", ch);
}

int main()
{

    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}