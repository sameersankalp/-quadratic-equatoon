#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=4;j++)
            {
                if(j==i||j==4|| i==1)
                    printf("*");
                else
                    printf(" ");

            }
            printf("\n");


    }
    return 0;
}
