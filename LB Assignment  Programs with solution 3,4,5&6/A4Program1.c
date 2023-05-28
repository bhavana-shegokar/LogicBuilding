// Write a program which accept name from user and print that name.


#include<stdio.h>

int main()
{
    
    char Name[30];

    printf("Please enter full name: \n");
    

    fgets(Name, 30, stdin);


    printf("Your name is %s\n",Name);

}