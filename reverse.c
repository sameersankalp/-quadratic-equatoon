#include<stdio.h>
#define MAX 10
int main()
{
    int i,j,n,a[MAX],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("the array element are:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
        for(i=0,j=n-1;i<j;i++,j--)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("after reversing the array:");
        for(i=0;i<n;i++)
            printf("%d",a[i]);
        return 0;




}
