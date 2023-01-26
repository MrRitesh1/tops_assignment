#include <stdio.h>
int n;
int maxnumber(int arr[])
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("MAX NUMBER = %d", max);

    return 0;
}
int main()
{
    printf("*enter number and check max number :\n");
    printf("Enter Arrey size : ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number %d :", i);
        scanf("%d", &num[i]);
    }
    printf("\n");
    maxnumber(num);

    return 0;
}