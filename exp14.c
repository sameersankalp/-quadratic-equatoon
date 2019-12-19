#include<stdio.h>
#define max 10
int main()
{
    int i,j,pos,a[max],n,data,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
   for(i=0;i<n;i++)
   {
    data=a[i];
   for(j=i+1;j<n;j++)
   {
       if(data==a[j])
       {
           for(k=j;k<n-1;k++)
            a[k]=a[k+1];
           n=n-1;
           j=j-1;
       }
   }
   }
   for(i=0;i<n;i++)
   printf("%d",a[i]);

   return 0;
}
