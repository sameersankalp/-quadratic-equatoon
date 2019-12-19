#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,n1,n2,n3,sum=0,p1=1,count,p,a;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        n3=n2=n1=i;
        count=0;
        sum=0;
        while(n2>0)
        {
            count++;
            n2=n2/10;
        }
        while(n1>0)
        {
            p=1;
            a=n1%10;
            for(j=1;j<=count;j++)
                p=p*a;
            sum=sum+p;
            n1=n1/10;

        }
        if(i==sum)
            printf("\n%d is the armstrong number",i);
    }
    return 0;
}
