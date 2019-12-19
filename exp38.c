/*

6: Write a program to calculate the salary as per the following table:     Gender Years of Service Qualifications Salary
Male
>= 10 Post-Graduate 15000 >= 10 Graduate 10000 < 10 Post-Graduate 10000 < 10 Graduate 7000
Female
>= 10

Post-Graduate 12000
>= 10 Graduate 9000 < 10 Post-Graduate 10000 < 10 Graduate 6000  */

 #include<stdio.h>
#include<conio.h>
int main()
{
    char gender,qual;
    int sal,yos;
    printf("Enter the gender(m/f) ,qual(p/g),yos");
    scanf("%c %c %d",&gender,&qual,&yos);
    if(gender=='m')
    {
        if(yos>=10)
        {
            if(qual=="pg")
                printf("salary is 15000");
            else
                printf("slary is 10000");
        }else
        {
            if(qual=="pg")
                printf("salary is 10000");
            else
                printf("salary is 7000");
        }
    }else
    {

        if(yos>=10)
        {
            if(qual=="pg")
                printf("salary is 12000");
            else
                printf("slary is 9000");
        }else
        {
            if(qual=="pg")
                printf("salary is 10000");
            else
                printf("salary is 6000");
        }

    }
}
