#include<stdio.h>
#define max 10
int main()
{
    int a[max],n,item,i,j,temp;
    printf("Enter the no of array element:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])

            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array element after sorting are:");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}
