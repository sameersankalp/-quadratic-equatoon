/* Write a C program to check whether a year is leap year or not. */
#include<stdio.h>
#include<conio.h>
int main()
{
    int yr;
    printf("Enter the year");
    scanf("%d",&yr);
    if(yr%100==0)
     {
         if(yr%400==0)
         printf("%d is the leap year");
         else
            printf("%d is not the leap year");
     }
     else
     {
         if(yr%4==0)
            printf("%d is the leap year");
     }
     return 0;

}
