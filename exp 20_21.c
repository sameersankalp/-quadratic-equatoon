#include<stdio.h>
#include<conio.h>
int main()
{
int n,n1,first,last,sum;
  printf("Enter the number");
  scanf("%d",&n);
  n1=n;
  last=n1%10;
  first=n;
  while(first>10)
  {
      first=first/10;
  }
  sum=first+last;
  printf("%d is the no. ",sum);
  return 0;

}
