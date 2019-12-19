#include<stdio.h>
#include<conio.h>
int main()
{
    char b;
    int a;
    printf("Enter any character");
    scanf("%c",&a);
          b=a;
          if(a>=65 && a=<90)
          printf("upper case");
          else if(a>=97 && a=<122)
          printf("Lower case");
          else
            printf("special character");
          return 0;



}
