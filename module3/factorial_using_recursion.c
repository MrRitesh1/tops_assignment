#include<stdio.h>
 int numbers(int n) {
    if (n>=1)
        return n*numbers(n-1);
    else
        return 1;
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial 0 of %d = %ld", n, numbers(n));
    return 0;
}

