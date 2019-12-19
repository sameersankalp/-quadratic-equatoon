#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='z')||(ch>='a'&&ch<='z'))
    {
        switch(ch)
        {
        case 'A':
        case 'a':
            case 'E':
        case 'e':
            case 'I':
        case 'i':
            case 'O':
        case 'o':
            case 'U':
        case 'u':
            printf("the alphabet is vowel");
            break;
        default:
            printf("the alphabet is consonant");

        }


        return 0;
    }

}
