#include<stdio.h>
int power(int,int);
int main()
{
    int a,b,p;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    p=power(a,b);
    printf("%d raised is %d=%d",a,b,power(a,b));
    return 0;

}
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
    return (p);

}
