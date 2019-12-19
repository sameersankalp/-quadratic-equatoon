#include<stdio.h>
#include<conio.h>
int main()
{
    int n,n1,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    n1=n;
    while(n>0)//for( ;n>0;)
    {
        n=n/10;
        count++;
    }
    printf("no. of digits in %d=%d",n1,count);
    return 0;

}
