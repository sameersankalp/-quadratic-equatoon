 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i,j,n;
     printf("Enter the number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=2;j<i;j++)
         {
             if(i%j==0)
                break;
         }
         if(i==j)

            printf("%d is the prime number",i);
            return 0;

     }
 }
