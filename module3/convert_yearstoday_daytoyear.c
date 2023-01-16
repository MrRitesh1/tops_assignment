#include <stdio.h>
 
void main()
{
    int ndays, days = 0, year;
 
    printf("Enter the number of days :- ");
    scanf("%d", &ndays);
    year = ndays / 365;
    days =(ndays % 365);
    printf ("%d is equivalent to %d years, %d daysn",
            ndays, year, days);
}