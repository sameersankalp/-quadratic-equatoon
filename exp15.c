#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0))
        printf("yes it is divisible by 11 and 5");
        else
        printf("yes it is not divisible by 11 and 5");
        return 0;

}
