#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,n2,a,sum=0,count=0,i=1,p=1
    ;
    printf("Enter the number");
    scanf("%d",&n);
   n2=n1=n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    while(n1>0)
    {
        p=1;
        a=n1%10;
       for(i=1;i<=count;i++)
        p=p*a;
       sum=sum+p;
       n1=n1/10;
    }
    if(sum==n2)
        printf("%d is the armstrong number",n2);
    else
        printf("%d is the not armstrong number",n2);
        return 0;
}
