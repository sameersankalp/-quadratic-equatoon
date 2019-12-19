 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i,j,n,f=1;
     float sum=0;
     printf("Enter the number:");
     scanf("%d",&n);
     i=1;
     while(i<=n)
     {
         f=1;
         for(j=1;j<=i;j++)
            f=f*j;
            if(i%2!=0)
         sum=sum+(float)(i)/f;
         else
        sum=sum-(float)(i)/f;
         i++;
     }
     printf("sum of series is %.2f",sum);
     return 0;
 }
