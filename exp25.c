#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,a,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(n1==rev)
        printf("%d is rev no.",n1);
        return 0;
