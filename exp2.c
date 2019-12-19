#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,f=1;

    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial of given number is %d",f);
    return 0;

}
