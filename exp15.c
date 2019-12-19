/*write a program to find the sum of all natural number*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum;
    i=1;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("%d",sum);
    return 0;
}
