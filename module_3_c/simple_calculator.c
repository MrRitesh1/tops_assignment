#include <stdio.h>
int main()
{
    printf("simple calculator \n\n");

    int x;
    int y;
    printf("enter first value :");
    scanf("%d", &x);
    printf("enter second value :");
    scanf("%d", &y);
    float z = (float)x / (float)y;
    printf("addition= %d \n", x + y);
    printf("subtaraction= %d \n", x - y);
    printf("multiplication= %d \n", x * y);
    printf("division= %f \n", z);
    printf("modulo= %d \n", x % y);

    return 0;
}