#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    float sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
       for(j=1;j<=i;j++)
       {
           a=a*i;
       }
             sum=sum+(float)a/i;
    }

    printf("%f",sum);
    return 0;
}
