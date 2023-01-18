# include <stdio.h>
 void reverse(char *name)
{
   if (*name)
   {
       reverse(name + 1);
       printf("%c", *name);
   }
}
int main()
{
   char a[100];
   printf("Entr Your Name :- ");
   gets(a);
   printf(" %c",a);
   reverse(a);
   return 0;
}