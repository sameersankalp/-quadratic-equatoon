/* Write a C program to find maximum between three numbers.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            max=a;
        }
        else
        {
            max=c;
        }
        {
        else
        {
            if(b>c)
                max=b;
            else
                max=c;
        }
        printf("max number=%d",max);
    }
    }
    return 0;
}
