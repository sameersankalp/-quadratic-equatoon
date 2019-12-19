#include<stdio.h>
#include<conio.h>
int main()
{
    int pos=0,neg=0,zero=0,num;
    char ans='y';
    while(ans=='y'||ans=='Y')
    {
        printf("Enter the value of num:");
        scanf("%d",&num);
        if(num>0)
            pos++;
        if(num<0)
            neg++;
        if(num==0)
            zero++;
        printf("do u want to enter more number");
        scanf("  %c",&ans);
    }

    printf("\nno. of zeros =%d",zero);
    printf("\nno. of positive =%d",pos);
    printf("\nno. of negative =%d",neg);
    return 0;

}
