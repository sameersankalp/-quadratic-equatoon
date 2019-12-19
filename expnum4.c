#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=6;i++)
    {
        for(k=i;k<6;k++)
            printf(" ");
        for(j=1;j<=i;j++)
        {
            if(i==1||i==6)
        printf("*");
        else if(j==1||j==i)
            printf("*");
        else
            printf(" ");


        }
        printf("\n");

    }
    return 0;
}

