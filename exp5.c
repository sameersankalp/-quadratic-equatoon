#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,a,b,c;
    for(i=1;i<=500;i++)
    {
        a=i%10;
        b=i%100;
        b=b/10;
        c=i/100;
        if(a*a*a+b*b*b+c*c*c==i)
            printf("\n%d is the armstrong number",i);


    }
    return 0;
}
