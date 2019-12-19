#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,f=1,n;
    float sum=0;
    printf("Enter the no.");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {   f=1;
        for(j=1;j<=i;j++)
        f=f*j;
         sum=sum + f/i;
        i++;
    }

    printf("%.2f",sum);
    return 0;
}
