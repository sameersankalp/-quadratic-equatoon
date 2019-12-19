/* While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
 If quantity and price per item are input through the keyboard, write a program to calculate the total expenses. */






#include<stdio.h>
#include<conio.h>
int main()
{
    int qty;
    float price,tot,dis;
    printf("Enter qty and price:");
    scanf("%d %f",&qty,&price);
    if(qty>1000)

        dis=10;

    tot=((qty*price)-(qty*price*(dis/100)));
    printf("%f",tot);
    return 0;

}
