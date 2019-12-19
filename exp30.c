
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,d,e;
    float per;
    printf("Enter the marks of 5 subject:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    if(per>=90)
    printf("Grade A");
    else if(per>=80)
        printf("Grade B");
     else if(per>=60)
        printf("Grade C");
         else if(per>=40)
        printf("Grade D");
         else if(per<40)
        printf("Grade F");
        return 0;

}
