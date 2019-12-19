/* In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and
  DA = 90% of basic salary. If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
 If the employee's salary is input through the keyboard write a program to find his gross salary. */




#include<stdio.h>
#include<conio.h>
int main()
{
    float bs,hra,da,gs;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    if(bs<1500)
    {
        hra=(10/100)*bs;
        da=(90/100)*bs;
    }
    else
    {
        hra=500;
        da=0.98*bs;
    }
    gs=hra+da+bs;
    printf("\n%f is the bs of employee",bs);
    printf("\n%f is hra",hra);
    printf("\n%f is da",da);
    printf("\n%f is gs",gs);

}
