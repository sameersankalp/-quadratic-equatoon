#include<stdio.h>
int main()
{

    int a[5],i,even=0,odd=0;
    printf("Enter the value of array:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<=4;i++)
    {
        if(a[i]%2==0)
           even++;
        else if(a[i]%2!=0)
           odd++;
    }
    printf("%d %d",even,odd);
    return 0;
}

