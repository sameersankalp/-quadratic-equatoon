#include<stdio.h>
#include<conio.h>
int main()
{
    int hr,otp,i;
    i=1;
    while(i<=10)
    {
        printf("\nEnter the hour worked %d by  employee",i);
        scanf("%d",&hr);
        if(hr>40)
        {
            otp=(hr-40)*12;
            printf("overtime pay for %d employee=%d",i,otp);
        }
        else
        {
            otp=0;
            printf("no overtime pay %d employee",i);
        }
        i++;
    }

}
