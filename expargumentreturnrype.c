#include<stdio.h>
void add(int,int);//prototype define...
int main()
{
    int a=10 ,b=20;
    add(a,b);
    return 0;
}
void add(int x,int y)
{
    int s;
    s=x+y;
    printf("addition=%d",s);
}
