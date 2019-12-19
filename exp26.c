#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the side of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if((c>(a+b))||(b>(a+c))||(a>(b+c)))
        printf("this is valid");
    else
        printf("not valid");
    return 0;
}
