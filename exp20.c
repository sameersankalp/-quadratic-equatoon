#include<stdio.h>
int main()
{
   int i,j,n,a,b;
   float sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
        b=1;
        for(j=1;j<=2;j++)
            a=a*i;//power
        for(j=1;j<=i;j++)
            b=b*j;//factorial
                if(i%2=0)
                sum=sum-(float)a/b;
            else
            sum=sum+(float)a/b;
    }
    printf("%.2f",sum);
    return 0;

}
