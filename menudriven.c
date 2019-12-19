#include<stdio.h>
#include<conio.h>
int main()
{
    int choice,n,i,f;
    while(1)
    {
        system("cls");
        printf("\n#menudriven#");
        printf("\n1.Factorial");
        printf("\n2.prime number");
        printf("\n3.odd or Even");
        printf("\n4.Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            f=1;
            printf("Enter the value of n:");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
                f=f*i;
                printf("%d",f);
                break;

             case 2:

                  printf("Enter the value of n:");
            scanf("%d",&n);
            for(i=2;i<n;i++)
            {
                if(n%i==0)
                    break;
            }
            if(i==n)
                printf("%d is the prime no.",n);
            else
                printf("%d is not the prime no.",n);

                break;

             case 3:

            printf("Enter the number:");
            scanf("%d",&n);
            if(n%2==0)
                printf("the no. is even number:");
            else
                printf("the no. is odd number");
            break;

             case 4:

            exit(0);
             default:
                printf("invalid option");
        }






    }
}
