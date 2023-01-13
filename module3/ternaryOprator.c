#include <stdio.h>

int main()
{
    //   WAP to find number is even or odd using ternary operator
printf("Even Numbars -----------\n");
    for(int i=0; i <=20; i++){
(i % 2 == 0)? printf("%d ",i):printf(" ,");
    }
    printf("\nOdd Numbars---------\n");
      for(int i=0; i <=21; i++){
(i % 2 != 0)? printf("%d ",i):printf(" , ");
    }
return 0;
}