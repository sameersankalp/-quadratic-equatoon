#include<stdio.h>
void calculate(int,int,int,int,int,float*,float*);
int main()
{
    int n1,n2,n3,n4,n5;
      float sum,avg;
      scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
      calculate(n1,n2,n3,n4,n5,&sum,&avg);
      printf("%f",sum);nn
      printf("\n  %f",avg);
      return 0;

}
 void calculate(int n1,int n2,int n3,int n4,int n5, float*sum,float* avg)
{
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5.0;
}
