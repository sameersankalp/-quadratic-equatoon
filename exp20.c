#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,n1,a;
    printf("Enter the number:");
    scanf("%d",&n);
    n=n1;
    while(n>0)
    {
        a=n%10;
        n=n/10;

    }
    printf("%d %d",a,n);
    return 0;

}
