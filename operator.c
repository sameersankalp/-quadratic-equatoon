#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10,b=3,c;
    c=a&&b;
    printf("\n%d",c);

    c=a|b;
    printf("\n%d",c);

    c=~a;
    printf("\n%d",c);
    c=~b;
    printf("\n%d",c);
    c=a<<b;
    printf("\n%d",c);
    c=a>>b;
    printf("\n%d",c);
    c=a^b;
    printf("\n%d",c);
    return 0;
}





