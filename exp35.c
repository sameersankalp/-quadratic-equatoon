#include<stdio.h>
#include<conio.h>
int main()
{
    int nod;
    printf("Enter the no. of days:");
    scanf("%d",&nod);
    if(nod>=1&&nod<=5)
        printf("fine=%.2f",nod*.5);
        else if(nod>5&&nod<=10)
            printf("fine=%.2f",nod*1.00);
        else if(nod>10&&nod<=30)
            printf("fine=%.2f",nod*5.00);
        else
            printf("your membership has been cancelled");
        return 0;


}
