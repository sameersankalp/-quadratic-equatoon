#include<stdio.h>
#define MAX 10
int main()
{
    int i,j,n,a[MAX],temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     printf("array element after sorting are:");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    return 0;

}
