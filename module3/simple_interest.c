#include <stdio.h>

int main()
{
    int i ,rate;
    float total,interast;

printf("Enter Your Fast Numbars :- ");
scanf ("%d",&i);
printf("Enter Your Interast rate:- ");
scanf ("%d",&rate);

interast = (i * rate)/100;
printf("\nInterast :- %.2f",interast);

total = i + interast;
printf("\nTotel :- %.2f" ,total);
    return 0;
}