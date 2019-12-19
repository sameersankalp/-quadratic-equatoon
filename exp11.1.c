/* A company insures its drivers in the following cases:
     − If the driver is married.
      − If the driver is unmarried, male & above 30 years of age.
       − If the driver is unmarried, female & above 25 years of age.
       In all other cases the driver is not insured.
       If the marital status, sex and age of the driver are the inputs,
       write a program to determine whether the driver is to be insured or not. (by else if)

*/





#include<stdio.h>
#include<conio.h>
int main()
{
char ms,gender;
int age;
printf("Enter the martial status,gender and age");
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
