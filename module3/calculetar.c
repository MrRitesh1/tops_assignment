#include <stdio.h>  
int main()  
{  
    char opt;  
    int n1, n2;   
    float res;  
      
    printf("Celculetar \n");
    scanf("%d %c %d",&n1 ,&opt,&n2);

    if (opt == '+' )  
    {  
        res = n1 + n2;
        printf ("Addition of %d and %d is: %.2f", n1, n2, res);  
    }  
    else if (opt == '-')  
    {  
        res = n1 - n2;
        printf ("Subtraction of %d and %d is: %.2f", n1, n2, res);       
        }  
       
    else if (opt == '*')  
    {  
        res = n1 * n2;
        printf ("Multiplication of %d and %d is: %.2f", n1, n2, res);       
        }  
    else if (opt == '/')  
    {  
        res = n1 / n2;
        printf ("Division of %f and %f is: %.2f", n1, n2, res);       
        }     
      else{}
    return 0;  
}  