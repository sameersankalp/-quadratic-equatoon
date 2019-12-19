#include<stdio.h>
#include<conio.h>
int main()

{
    float sum=0;
    int n,i;
    printf("Enter the no. of terms");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum=sum+power(i,i)/fact(i);

      i++;
    }
      printf("sum of series=%f",sum);
    return 0;

}
    int power(int x,int y)
    {
        int i,p=1;
        for(i=1;i<=y;i++)
            p=p*x;
        return(p);

    }
    int fact(int n)
    {
        int i,f=1;
        for(i=1;i<=n;i++)
            f=f*i;
        return(f);
    }
