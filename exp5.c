#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,a,rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    n=n1;
    a=n1%10;
    n1=n1/10;
    rev=rev+a*10000;

    a=n1%10;
    n1=n1/10;
    rev=rev+a*1000;

    a=n1%10;
    n1=n1/10;
    rev=rev+a*100;

    a=n1%10;
    n1=n1/10;
    rev=rev+a*10;

    a=n1%10;
    n1=n1/10;
    rev=rev+a*1;

    if(n==rev)
        printf("both are equal");
    else
        printf("both are not equal");
    return 0;



}
