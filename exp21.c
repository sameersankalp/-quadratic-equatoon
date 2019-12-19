#include<stdio.h>
int main()
{
    int i,j,n,sum=0,a,b;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i+1;
        if(i%2==0)
        sum=sum-i/a;
        else
        sum=sum+i/a;
    }
    printf("%.2f",sum);
    return 0;
}
