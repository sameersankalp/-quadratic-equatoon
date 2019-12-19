#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the numbers:");
    scanf("%d",&a);

    if(a>0)
        printf("the number is positive");
    if(a<0)
         printf("the number is negative");
    if(a==0)
         printf("the number is zero");
    return 0;

}
