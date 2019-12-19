#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n%d*%d=%d",n,i,n*i);

    }
    return 0;
}
