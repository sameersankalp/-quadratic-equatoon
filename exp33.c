#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%400==0||(a%100!=0&&a%4==0))
        printf("%d is a leap year",a);
    else
        printf("%d is not a leap year",a);
    return 0;
}
