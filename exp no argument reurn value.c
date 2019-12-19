#include<stdio.h>
int add();//prototypen
int main()
{
    int sum;
    sum=add();
    printf("addition=%d",sum);
    return 0;
}
int add()
{
    int a=20,b=30,s;
    s=a+b;
    return (s);
}
