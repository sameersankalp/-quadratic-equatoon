#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    double root1,root2;
    printf("Enter the value of a,b,c and,d in equntion a(x*x)+b*x+c=0:");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)//complex root
    {
        printf("\n%.2lf+%.2lf",-b/(2*a),sqrt(-d)/(2*a));
        printf("\n%.2lf-%.2lf",-b/(2*a),sqrt(-d)/(2*a));

    }
    else
    {
        root1=(-b+sqrt(d))/(2*a);
          root2=(-b-sqrt(d))/(2*a);
          printf("\n%.2lf",root1);
          printf("\n%.2lf",root2);

    }
    return 0;
}
