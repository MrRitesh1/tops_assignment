#include <stdio.h>

int main()
{
    int n ,i;
    int sum = 0;
    printf("Enter numbars :- ");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++){
        printf("%d",i);
            sum = sum + i;
               }
    printf("\nSum :- %d",sum);
return 0;
}