#include<stdio.h>
#include<conio.h>
int main()
{
char ms,gender;
int age;
printf("Enter the age,martial status and gender");
scanf("%c %c %d",&ms,&gender,&age);
if(ms=="M")
{
    printf("driver is insured");

}else if(ms=="UM"&&gender=="M"&&age>25)
{
    printf("driver is insured");
}else if(ms=="UM"&&gender=="F"&&age>30)
{
    printf("driver is insured");
}
else
    printf("driver is not insured");
return 0;
}
