#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of side of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
     printf("it is equilateral triangle");
     else if((a==b!=c)&&(a!=b==c)&&(a==c!=b))
        printf("isosceles");
     else if(a!=b&&b!=c&&c!=a)
        printf("scalene");
    return 0;
}
