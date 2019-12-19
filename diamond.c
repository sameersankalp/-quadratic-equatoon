 #include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
     for(i=5;i>=1;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=5;k++)
        if(k==1||k==i)
            printf ("*");
        else
            printf(" ");
        for(l=i;l<5;l++)
            if(l==4)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<=5;k++)
            printf("*");
        for(l=i;l<5;l++)
            printf("*");
        printf("\n");
    }
    return 0;
}
