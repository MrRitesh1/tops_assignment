#include <stdio.h>

int main()
{
        // 1. WAP to print 972 to 897 using for loop
printf("972 to 897 ----------------------\n");

    for(int i = 972; i>=897; i--){
        printf("%d ,",i);
    }
// 2. WAP to take 10 no. Input from user and find out …
printf("\n\nEven And Odd Numbars Usar  --------------------\n");

int a;
printf("\nEnter numbars :- ");
scanf("%d",&a);



// 3. How many Even numbers are there Ex: 2 ,4 ,6 ...
printf("\n\nEven Numbars --------------------\n");
for(int i=0; i <=a; i++){
    if(i % 2 == 0){
        printf("%d ,",i);
    }
}
// 4. How many odd numbers are there Ex : 1 ,3 ,5 ,7...
printf("\n\nOdd Numbars ----------------------\n");
for(int i=0; i <=a; i++){
    if(i % 2 != 0){
        printf("%d ,",i);
    }
}
printf("\n\nEven Numbars Sum ----------------------\n");

// 5. Sum of even numbers 0 to 20 = sum 110  onli odd numbars
  int sum=0;  
//    int n, 
//     printf("\nEnter any Even number: ");  
//     scanf("%d", &n);  
    for(int i=2; i<=a; i+=2)  
    {  
        sum += i;  
    }  
    // printf("Sum of all even numbers from 1 to %d:- %d", n, sum);
    printf("Sum For 0 to 20 Even Numbars :- %d",sum);

     printf("\n\nOdd Numbars Sum ----------------------\n");

    //6. Sum of odd numbers 0 to 21 = sum 121  onli odd numbars
    int _sum = 0;
    // int o;
    // printf("\nEtar any Odd numer :");
    // scanf("%d",&o);
    for(int i = 0; i <= a; i++){
        if(i % 2 != 0){
        _sum += i;
        }
    }
    // printf("Sum of all even numbers from 1 to %d:- %d", o, _sum);
        printf("Sum For 0 to 21 Odd Numbars :- %d",_sum);

    //6. WAP to print table up to given numbers

    int num;
    printf("\n\nEnter yor numbars :-");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, i * num);
    }
        

return 0;
}