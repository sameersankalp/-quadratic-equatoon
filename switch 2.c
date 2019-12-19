#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter alphabets a,b or c\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
            printf("the letter is 'a");
            break;
            case 'b':
        case 'B':
            printf("the letter is 'b");
            break;
            case 'c':
        case 'C':
            printf("the letter is 'c");
            break;
        default:
            printf("invalid number:");
            break;
    }
    return 0;
}
