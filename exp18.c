/* Write a C program to check whether a character is alphabet or not. */

#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
    if((ch>=65&&ch<=90)||(ch>=97&&ch<121))
    printf("it is alphabet");
    else
        printf("it is not an alphabet");
    return 0;
}
