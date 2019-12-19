#include<stdio.h>

int main()
{
    int a[10],i;
    printf("Enter the value of array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=1;i<=9;i++)
    {
        printf("%d",a[i]);
    }
     for(i=1;i<=9;i++)
    {
       if(a[i]<0)
       printf(" neg no. is
              %d",a[i]);
       return 0;
    }
}
