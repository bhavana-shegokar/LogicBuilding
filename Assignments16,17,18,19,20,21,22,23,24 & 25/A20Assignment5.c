/* Accept Division of student from user & depends on division display exam timing.
There are 4 division in school as A, B, C, D.
Exam of A at 7 AM
Exam of B at 8.30 AM
Exam of C at 9.20 AM
Exam of D at 10.30 AM
(Application should be case insensitive)
Input : C
Output: Your exam is at 9.20 AM
Input : d
Output: Your exam is at 10.30 AM
*/#include <stdio.h>

void DisplaySchedule(char ch)
{
    if ((ch == 'a') || (ch == 'A'))
    {
        printf("Your exam is at 7 AM\n");
    }
    else if ((ch == 'b') || (ch == 'B'))
    {
        printf("Your exam is at 8.30 AM\n");
    }
    else if ((ch == 'c') || (ch == 'C'))
    {
        printf("Your exam is at 9.20 AM\n");
    }
    else if ((ch == 'd') || (ch == 'D'))
    {
        printf("Your exam is at 10.30 AM\n");
    }
    else{
        printf(" Invalid Division.....");
    }
}

int main()
{

    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}