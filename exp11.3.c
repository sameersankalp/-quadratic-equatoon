/* A company insures its drivers in the following cases:
    − If the driver is married.
    − If the driver is unmarried, male & above 30 years of age.
    − If the driver is unmarried, female & above 25 years of age.
    In all other cases the driver is not insured.
     If the marital status, sex and age of the driver are the inputs,
     write a program to determine whether the driver is to be insured or not.(if ladder) */




int main()
{
char ms,gender;
int age;
printf("Enter the age,martial status(M/U) and gender(M/F)");
scanf("%d %c %c",&age,&ms,&gender);
if(ms=="M")
{
    printf("driver is insured");

}
if(ms=="U"&&gender=="M"&&age>30)
{
    printf("driver is insured");

}
if(ms=="U"&&gender=="F"&&age>25)
{
    printf("driver is insured");

}
else{
    printf("driver is not insured");
}
}
return 0;
