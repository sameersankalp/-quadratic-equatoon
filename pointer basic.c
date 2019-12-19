#include<stdio.h>
int main()
{
    int a[3][3]={2,6,1,3,5,6.7,8};
    int *p[3][3];//array to pointer
    int (*q)[3];//pointer to array
    p[0]=&a[0][0];
    q=a;
    printf("%u %u",p[0],q);
  p[0]++;
  q++;
  printf("\n%u %u",p[0],q);
  return 0;

}
