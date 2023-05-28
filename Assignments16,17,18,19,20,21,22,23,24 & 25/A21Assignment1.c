/* Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation
of every member from 0 to 255
*/

#include <stdio.h>

void DisplayASCII()
{
    printf("___________________________________________________\n");
    printf("ASCII Table\n");
    printf("___________________________________________________\n");

    printf("Character\tDecimal\tHexa Decimal\tOctal");

    for (int i = 0; i <= 255; i++)
    {

        printf("%c \t %d \t %x \t %o\n", i, i, i, i);
    }
    printf("___________________________________________________\n");
}

int main()
{

    DisplayASCII();
    return 0;
}
