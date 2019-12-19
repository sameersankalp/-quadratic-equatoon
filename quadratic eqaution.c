#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    float r1,r2,d;
    printf("entrevalue of a");
    scanf("%d",&a);
    printf("antre b");
    scanf("%d",&b);
    printf("enrre c ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    if (d>0)
    {
       printf(" real roots");

       r1=((-b)+sqrt(d))/(2*a);
       r2=((-b)-sqrt(d))/(2*a);
       printf("\nroots:%f,%f\n",r1,r2);



    }

else if (d==0)
{
   printf("\nroots are equal\n");


}


else if(d<0)

{

    printf("roots are iamginary
           ");



}
    return 0;
}
