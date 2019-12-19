#include<stdio.h>
#define max 10
int main()
{
    int a[max],n,i,low,high,mid,item;
    printf("Enter the no. of element:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the item:");
    scanf("%d",&item);
    low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item==a[mid])
        {
            printf("item is at %d position",mid+1);
            break;
        }
        if(item<a[mid])
        {
            high=mid-1;

        }
        else
            low=mid+1;
    }
    return 0;

}




