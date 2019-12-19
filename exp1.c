
#include<stdio.h>
float cube(float);
int main()
{
    float num,c;
    printf("Enter the number:");
    scanf("%d",&num);
    c=cube(num);
    printf("cube of %f=%f",num,c);
    return 0;
}
float cube(float n)
{
    return(n*n*n);
}
