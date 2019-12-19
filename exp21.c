/* Write a C program to check whether a character is uppercase or lowercase alphabet. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    printf("Enter the value:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
        printf("this is uppercase");
     else if(ch>=97&&ch<=122)
        printf("this is lowercase");
     return 0;
}
