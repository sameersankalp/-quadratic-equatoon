#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<4;j++)
            printf(" ");
        for(k=1;k<=(2*i-1);k++)
            printf("%d",i);
        printf("\n");
    }
    return 0;
}

