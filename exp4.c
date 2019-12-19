#include<stdio.h>
int main()
{

    int a[5],i,max,min;
    printf("Enter the value of array:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);

    }
    max=min=a[0];
    for(i=0;i<=4;i++)
    {
        if(max>a[i])
            max=a[i];
        else if(min<a[i])
            min=a[i];
    }
    printf("%d %d",max,min);
    return 0;
}
