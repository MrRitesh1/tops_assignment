#include<stdio.h>  
int main()    
{    // 1*2*3*4... = ?
 int i,b=1,n;    
 printf("Enter a number: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      b=b*i;    
  }    
  printf("Factorial of %d is: %d",n,b);    
return 0;  
} 