#include<stdio.h>
#include<conio.h>
int main()
{
    int a,amt,totalamt;
    printf("Enter the unit charges:");
    scanf("%d",&a);
    if(a<=50)
        amt=50*0.50;

    else if(a<=150)
    amt=25+((a-50)*0.75);

    else if(a<=250)
     amt=25+100*0.75+(a-150)*1.20;

    else
        amt=25+75+120+(a-250)*1.50;


         totalamt=amt+(0.2)*amt;
         printf("total amount=%d",totalamt);
         return 0;



}
