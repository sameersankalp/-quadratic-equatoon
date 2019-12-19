
/* Write a C program to find maximum between three numbers.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    printf("Enter  the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        max=a;
    }
    else if(b>a && b>c)
    {
        max=b;
    }
    else
        {
            max=c;
        }
    printf("%d",max);
    return 0;
}
