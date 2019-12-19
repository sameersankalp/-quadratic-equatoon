#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,f=1,n,p=1;
    float sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        f=1;
        p=1;
        for(j=1;j<=i;j++)
            f=f*j;
        for(j=1;j<=i;j++)
            p=p*i;
        sum=sum+(float)(p)/f;
        i++;
    }
    printf("%f is the sum of series",sum);
    return 0;
}
