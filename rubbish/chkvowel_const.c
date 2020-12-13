#include<stdio.h>
int main(void)
{
    char ch;
    printf("Entetr a Character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Its A Vowel");
                  break;
        default : printf("Its A Consonent");
                  break;
    }
    return 0;
}
