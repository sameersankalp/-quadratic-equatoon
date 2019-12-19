 /*The current year and the year in which the employee joined the organization are entered through the keyboard.
 If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs. 2500/-
 is given to the employee. If the years of service are not greater than 3, then the program should do nothing .*/



#include<stdio.h>
#include<conio.h>
int main()
{
    int curr,joi,c;
    printf("Enter the current year and the year joined:");
    scanf("%d %d",&curr,&joi);
    c=curr-joi;
    if(c>3)
    {
        printf("the bonus is 2500");
    }
    return 0;
}

