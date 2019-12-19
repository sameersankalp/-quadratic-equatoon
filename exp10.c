#include<stdio.h>
#define max 10
int main()
{
    int i,j,pos,a[max],n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter the position");
    scanf("%d",&pos);
    for(i=pos;i<=n-1;i++)
    {
        a[i-1]=a[i];
    }
    n=n-1;
    printf("after deletion array element are:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;
}
