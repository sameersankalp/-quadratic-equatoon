/*The distance between the two cities is given in kma is input.
write a program to convert in feet ,inches and cms.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int km,m,cm,inch,feet;
    printf("Entner the distance between 2 cities in kms:");
    scanf("%d",&km);
    m=km*1000;
    cm= m*100;
    inch=(cm/2.5);
    feet=(inch/12);
    printf("\n%d is the distance in km",km);
    printf("\n%d is the distance in m",m);
    printf("\n%d is the distance in cm",cm);
    printf("\n%d is the distance in inch",inch);
    printf("\n%d is the distance in feet",feet);
    return 0;


}
