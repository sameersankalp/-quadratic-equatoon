#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i,y=0;
    printf("enter the number:");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        y=y+i;

    }
    if(y==x)
        printf("the no. is perfect no.");
    else
        printf("the no. is not the perfect no.");
    return 0;
}
