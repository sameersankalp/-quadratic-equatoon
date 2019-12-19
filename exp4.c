/* If cost price and selling price of an item is input through the keyboard, write a
 program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or
 loss he incurred.*/




 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int a,b,max;
     printf("Enter the  and b no.:");
     scanf("%d %d",&a,&b);
     if(a>b)
        max=a;
     else
        max=b;
     printf("%d is the max",max);
     return 0;

 }
