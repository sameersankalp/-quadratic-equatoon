#include<stdio.h>
#include<conio.h>
int main()
{
    int m;
    printf("enter percentage");
    scanf("%d",&m);
    if(m>=60)
        printf("1st divisionaa");
        else if(m>=45)
            printf("2nd divison");
            else if (m>=33)
            printf("3rd division");
            else
            printf("fail");
        return 0;
}
