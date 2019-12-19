#include<stdio.h>
 int even(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(even(n))
    printf("%d is the even",n);
    else
    printf("%d is odd",n);

    return 0;

}

int even(int n)
{
    return(n%2==0?1:0);
}
