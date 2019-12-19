#include<stdio.h>
#define MAX 10
int main()
{
    int i,j,n,a[MAX],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&temp<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("arranged order of element is ");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}
