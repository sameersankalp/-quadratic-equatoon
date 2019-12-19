#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l,s;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(k=i;k<5;k++)
            {
             s=5;
            printf("%d",s--);

            }
        for(l=i;l<=5;l++)
        {
            s=5;
            printf("%d",s++);

        }

            printf("\n");
    }
    return 0;

}
