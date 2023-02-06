#include <stdio.h>

int main()
{
    printf("---------------------------------------");
    int num, r;
    printf("enter namber: ");
    scanf("%d", &num);

    while (num != 0)
    {
        r = num % 10;
        //  rev = rev * 10 + r;
        num /= 10;

        printf("%d", r);
    }
    return 0;
}