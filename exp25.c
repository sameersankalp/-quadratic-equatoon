/* Write a C program to input angles of a triangle and check whether triangle is valid or not. */

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("enter the angles of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;
    if(d==180&&a>0&&b>0&&c>0)
        printf("valid");
    else
        printf("not valid");
    return 0;
}
