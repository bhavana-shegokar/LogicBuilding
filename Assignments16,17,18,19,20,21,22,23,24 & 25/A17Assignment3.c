/*Accept number of rows and number of columns from user display below pattern.
Input :  iRow=4     iColumn=4
Output:

        2   4   6   8   10
        1   3   5   7   9
        2   4   6   8   10
        1   3   5   7   9

*/

#include <stdio.h>

void Pattern(int iRow, int iCol)
{

    int i = 0, j = 0;

    if (iRow < 0)
    {
        iRow = -iRow;
    }
    if (iCol < 0)
    {
        iCol = -iCol;
    }

    for (i = 1; i <= iRow; i++)
    {

        for (j = 1; j <= iCol; j++)
        {
            int iCount = 1;
            if (i % 2 != 0)
            {
                printf("%d\t", iCount);
                iCount = iCount + 2;
            }
            else
            {
                printf("%d\t", (iCount += 2));
            }
        }
        printf("\n");
    }
}

int main()
{

    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows & colums :");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}