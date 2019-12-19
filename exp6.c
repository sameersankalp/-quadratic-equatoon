#include<stdio.h>
#include<conio.h>
int main()
{
    int ra,sa,aa;
    printf("Enter the age of ram,shyam and ajay:");
    scanf("%d%d%d",&ra,&sa,&aa);
    if(sa<ra&&sa<aa)
    {
        printf("shyam is the youngest brother");
    }
        else if(ra<sa&&ra<aa)
           {
                printf("ram is youngest brother");
           }

        else if(aa<ra&&aa<sa)
        {
          printf("ajay is the younngest brother");
        }

        return 0;

}
