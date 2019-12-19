#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,s=97;
    for(i=1;i<=4;i++)
    {
        for(j=4;j>=i;j--)
            printf("%c",s);
            s++;
        printf("\n");
    }
    return 0;
}

