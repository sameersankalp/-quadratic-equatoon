#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,n,l;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
            printf(" ");
            for(j=1;j<=i;j++)
            printf("\n");

    }
    for(l=1;l<=n;l++)
    {
         for(k=1;k<=l;k++)
            printf(" ");
            for(k=n;k>l;k--)
                printf("*");
            printf("\n");

    }

return 0;
}
