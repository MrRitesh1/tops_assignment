#include <stdio.h>  
   
int main() {  
    int a, b;   
    printf("Enter Numbar\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) {
        printf("%d Is Largest\n", a);          
    } else if (b > a){ 
        printf("%d Is Largest\n", b);  
    } else {
        printf("Both Equal\n");
    }
   
    return 0;  
} 