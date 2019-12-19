#include<stdio.h>
#define MAX 10
int main()
{


    int a[MAX],n,item,i,j,temp,MAX1,MAX2;
    printf("Enter the no of array element:");
    scanf("%d",&n);
    printf("Enter the array element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    MAX1=MAX2=a[0];
    for(i=0;i<n;i++)
    {


    {
        if(a[i]>MAX)
      {
          MAX2=MAX1;
        MAX1=a[i];
      }

        else if(MAX2<a[i]&&a[i]<MAX1)

        MAX2=a[i];

    }
    printf("the arrray element after the sorting are:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    return 0;



}
}
