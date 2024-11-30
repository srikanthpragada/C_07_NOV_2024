// Print a string vertically

#include<stdio.h>

void print_vertical(char st[50])
{
  int i;

      for(i = 0; st[i] != '\0'; i ++)
      {
         printf("%c\n", st[i]);
      }
}

void main()
{
 char name[50] = "Srikanth";


       print_vertical("Hello");
       print_vertical(name);
}

