#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k,n;
    printf("Enter the no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
            printf("\n");

    }
    for(i=1;i<=n;i++)
    {
         for(k=n;k>=i;k--)
            printf("*");
            printf("\n");

    }

return 0;
}
