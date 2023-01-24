#include <stdio.h>
struct studant_info{
    int empno;
    char name[40];
    char address[50];
    int age;
};

int main()
{
    struct studant_info e[2];
    printf("Enter Your 5 Employees Information :\n");

   for(int i = 0; i < 5; i++ ){
    printf("Enter EMP_ID : ");
    scanf("%d",&e[i].empno);
    printf("Enter NAME : ");
    scanf("%s",e[i].name);
    printf("Enter ADDRESS : ");
    scanf("%s",e[i].address);
    printf("Enter AGE : ");
    scanf("%d",&e[i].age);
    printf("\n");
   }
    // printf("\n******************************************************************************************\n");
    // printf("| EMP_NO\t | NAME\t\t\t | ADDRESS\t\t | AGE\t |\n");
    // printf("*******************************************************************************************\n");
    for(int i = 0; i < 5; i++){
        printf("| %d\t\t |  %s\t\t | %s\t\t | %d\t |*\n",e[i].empno,e[i].name,e[i].address,e[i].age);
   
    }
    // printf("\n**************************************************************************************\n");
    return 0;
}