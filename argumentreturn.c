#include<stdio.h>

int main()
{
    int a=10,b=20,sum;
    sum=add(a,b);
    printf("addition=%d",sum);
    return 0;
}
int add(int x,int y)
{
    return(x+y);
}
