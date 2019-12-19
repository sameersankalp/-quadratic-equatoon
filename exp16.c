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
       if(i%2==0)
            sum=sum-(float)a/i;
             else
            sum=sum+(float)a/i;
    }

    printf("%.2f",sum);
    return 0;
}

