  #include<stdio.h>
  #include<conio.h>
  #define MAX 10
  int main()
  {
  int i,j,a[MAX][MAX],sum=0,n;
  printf("Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the array element:");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);

  }
  printf("array element are:\n");

  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
        printf("\n");

  }
  for(i=0;i<=n;i++)
  {
      for(j=0;j<n;j++)
      {
        if(i>=j)
      {
          printf("%d",a[i][j]);
          sum=sum+a[i][j];

      }
      else
        printf(" ");
  }
  printf("\n");

}
    printf("sum of diagonal of element are %d",sum);
    return 0;

 }













