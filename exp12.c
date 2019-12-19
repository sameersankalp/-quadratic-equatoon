#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,s;

    for(i=97;i<=100;i++)
    {
        for(j=97;j<=i;j++)
            printf("%c",j);
        printf("\n");
    }
    return 0;
}
