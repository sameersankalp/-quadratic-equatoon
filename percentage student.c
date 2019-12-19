#include<stdio.h>
#include<conio.h>
int main()
{
    float avg, sum=0;
    int i;
    int marks[30];
    for(i=0;i<=29;i++)
    {
        printf("Enter the number:");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=29;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/30;
    printf("\navag of 30 students marks are %f",avg);
    return 0;
}
