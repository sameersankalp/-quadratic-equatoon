#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=4;i>=1;i--)
    {
        for(j=i;j>1;j--)
            printf(" ");
        for(k=4;k>=i;k--)
            printf("%d",k);
        printf("\n");
    }
    return 0;
}
