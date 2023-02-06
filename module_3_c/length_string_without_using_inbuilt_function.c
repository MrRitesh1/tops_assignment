#include <stdio.h>

int main()
{
    char name [50];
    int n , length =0;
    printf("Enter Your Name :- ");
    gets(name);
     for (n = 0; name[n]; n++)
    {
        length++;
    }
    printf("Your Sring Langth :- %d",length);
return 0;
}