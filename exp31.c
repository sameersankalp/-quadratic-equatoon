#include<stdio.h>
#include<conio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    if(bs<=10000)
    {
        hra=0.2*bs;
        da=.8*bs;
    }
    else if(bs<=20000)
     {
         hra=(0.25)*bs;
         da=(0.90)*bs;
     }
     else
     {
         hra=(0.3)*bs;
         da=(0.95)*bs;
     }
     gs=bs+hra+da;
     printf(" \nbs is %.2f",bs);
     printf("\nhra is %.2f",hra);
     printf("\nda is %.2f",da);
     printf("\ngs is %.2f",gs);
     return 0;
}



