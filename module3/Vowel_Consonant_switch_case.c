#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);


    switch(ch)
    {
        case 'a': 
            printf("Consonant");
            break;
        case 'b': 
            printf("Consonant");
            break;
        case 'c': 
            printf("Consonant");
            break;
        case 'd': 
            printf("Consonant");
            break;
        case 'e': 
            printf("Consonant");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'B': 
            printf("Vowel");
            break;
        case 'C': 
            printf("Vowel");
            break;
        case 'D': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        default: 
            printf("a,b,c,d,e || A,B,C,D,E onliy");
    }

    return 0;
}
