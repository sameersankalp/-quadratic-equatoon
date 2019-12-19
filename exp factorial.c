#include<stdio.h>
int factorial();
int main()
{
    int a,f;
    printf("Enter the value a");
    scanf("%d",&a);
    f=factorial(a);
    printf("%d is the factorial",f);
    return 0;
}
int factorial(int x)
{
    int i,j,f=1;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
            f=f*j;
        return(f);
    }
}
