#include <stdio.h>  
int main()  
{  
    char o;  
    int n1, n2;   
    float res;  
      
    printf("Celculetar \n");
    scanf("%d %c %d",&n1 ,&o,&n2);

    if (o == '+' )  
    {  
        res = n1 + n2;
        printf ("Addition of %d and %d is: %.2f", n1, n2, res);  
    }  
    else if (o == '-')  
    {  
        res = n1 - n2;
        printf ("Subtraction of %d and %d is: %.2f", n1, n2, res);       
        }  
       
    else if (o == '*')  
    {  
        res = n1 * n2;
        printf ("Multiplication of %d and %d is: %.2f", n1, n2, res);       
        }  
    else if (o == '/')  
    {  
        res = n1 / n2;
        printf ("Division of %.2f and %.2f is: %.2f", n1, n2, res);       
        }     
      else{}
    return 0;  
}  