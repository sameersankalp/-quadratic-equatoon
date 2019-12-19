#include<stdio.h>
#include<conio.h>
 #include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,s1,s2,s3;
    printf("Enter the value of x1,x2 and x3,y1,y2,y3:");
    scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
    s1=abs(y2-y1)/abs(x2-x1);
    s2=abs(y3-y1)/abs(x3-x1);
    s3=abs(y3-y2)/abs(x3-x2);
    if((s1==s2)&&(s2==s3))
        printf("all the ponits fall on the one line");
    else
        printf("all the ponits  not fall on the one line");
    return 0;


}
