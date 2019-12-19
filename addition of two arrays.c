#include<stdio.h>
#define MAX 10
int main()
{
    int i,j,n,a[MAX][MAX],b[MAX][MAX],c[MAX][MAX];
    printf("Enter the size of matrix:");
    scanf("%d",&n);
    printf("Enter the element of  1st array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    printf("element of 1st array are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
         {

        printf("%d\t",a[i][j]);

         }
         printf("\n");
    }
    printf("Element of 2nd array are:");
     for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);


    }
    printf("element of 2nd array are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");

    }
    printf("the sum of both the array a and b are\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
         {
             c[i][j]=a[i][j]+b[i][j];

         }
         printf("\n");

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d\t",c[i][j]);
            printf("\n");
    }

    return 0;
}









