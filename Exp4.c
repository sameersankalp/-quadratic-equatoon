/*convert the given farhenhite temp into celcius*/



#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;

    printf("Enter tempreture in farhenhite");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("\n%f is temp in farhenhite",f);
    printf("\n%f is tem in celcius",c);
    return 0;
}
