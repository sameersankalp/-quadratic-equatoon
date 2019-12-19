/*Ramesh's basic salary is input through the keyboard.His dearness allowance is 40% of basic salary,and house rent allowance is
20% of basic salary.write a programme to calculate his gross salary.*/

 #include<stdio.h>
 int main()
 {
     float bs,da,hra,gs;
     printf("Enter the basic salary:");
     scanf("%f",&bs);
     da=bs*0.4;
     hra=bs*0.2;
     gs=da+hra;
     printf("\n%.1f is bs",bs);
      printf("\n%.1f is da",da);
       printf("\n%.1f is hra",hra);
        printf("\n%.1f is gs",gs);
        return 0;


 }
