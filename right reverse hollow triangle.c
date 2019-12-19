#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<i;k++)
            printf(" ");
        for(j=5;j>=i;j--)
            if(j==5||i==1||j==i)
            printf("*");
        else
            printf(" ");
        printf("\n");

    }
}
