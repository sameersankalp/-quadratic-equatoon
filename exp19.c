 /*Write a C program to input any alphabet and check whether it is vowel or consonant.*/

#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    char ch,ch1;
    printf("Enter the alphabet:");
    scanf("%c",&ch);
    ch1=tolower(ch);
    if(ch1=='a'||ch1=='e'||ch1=='i'||ch=='o'||ch=='u')
        printf("%c is the vowel",ch);
    else
         printf("%c is the consonant",ch);
    return 0;
}
