#include<stdio.h>
int main()
{

    int a[5],b[5],i;
    printf("Enter the value of array:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);

    }

   for(i=0;i<=4;i++)
   {
       b[i]=a[i];
       printf("\n%d",b[i]);

   }

   return 0;
}

