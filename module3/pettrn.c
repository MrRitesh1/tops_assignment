
#include <stdio.h>
#include <math.h>

int main()
{
    /*
     *
     **
     ***
     ****
     *****
     */
    for (int i = 1; i <= 5; i++)
    {
        for (int o = 1; o <= i; o++)
        {
            printf("*");
        }
        printf("  \n");
    }
    printf("----------------------------------------------------\n");
    /*
    *****
    ****
    ***
    **
    *
    */

    for (int i = 1; i <= 5; i++)
    {
        for (int o = 5; o >= i; o--)
        {
            printf("*");
        }
        printf(" \n");
    }
        printf("----------------------------------------------------\n");

    // sem pettrn and athar demo
    /*
    *****
    ****
    ***
    **
    *
    */
    for (int i = 5; i > 0; i--)
    {
        for (int o = i; o > 0; o--)
        {
            printf("*");
        }
        printf(" \n");
    }
        printf("----------------------------------------------------\n");

/*
1
10
101
1010
10101
*/

    for (int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }
                printf("----------------------------------------------------\n");
/*
1
2 3
4 5 6
7 8 9 10
*/
    int n = 1;
     for(int i = 1; i<=5;i++){
        for (int j = 1; j <= i; j++)
        {
         printf("%3d",n);
         n++;
        }
        printf("\n");
    }
        printf("----------------------------------------------------\n");

/*
A
AB
ABC
ABCD
ABCDE
*/
    for(char i = 'A'; i<='E';i++){
        for (char j = 'A'; j <= i; j++)
        {
         printf("%c ",j);
        }
        printf("\n");
    }
            printf("----------------------------------------------------\n");
/*
A
AB
ABC
ABCD
ABCDE
*/
  char q = 'A';
     for(char i = 'A'; i<='E';i++){
        for (char j = 'A'; j <= i; j++)
        {
         printf("%3c",q);
         q++;
        }
        printf("\n");
    }
            printf("----------------------------------------------------\n");
/*
      *
     * *
    * * *
   * * * *
*/
   int m = 1;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= m; k++)
        {
            printf(" * ");
        }
        m++;
        printf("\n");
    } 
            printf("----------------------------------------------------\n");
/*
*
**
***
****
*****
****
***
**
*
*/
    int a = 3;
    for(int i = a; i>=-a;i--){
        for(int j = a; j>=abs(i);j--){
            printf(" * ");
        }
        printf("\n");
    }
    
    return 0;
}