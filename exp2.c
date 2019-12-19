#include<stdio.h>
#include<conio.h>
float circum(float);
float area(float);
float diameter(float);

int main()
{
    float c,r,ar,dia;
    printf("Enter the radius");
    scanf("%f",&r);
    c=circum(r);
    ar=area(r);
    dia=diameter(r);

    printf("\n%f",c);
    printf("\n%f",ar);
    printf("\n%f",dia);

    return 0;

}
float circum(float r)
{
    return(2*3.14*r);
}
float area( float r)
{
    return(3.14*r*r);
}
float diameter(float r)
{
    return(2*r);
}
