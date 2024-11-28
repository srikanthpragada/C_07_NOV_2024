// Take a string and print each word on a separate line

#include<stdio.h>

int main()
{
  char st[50];
  int i;

      printf("Enter a string :");
      gets(st);

      for(i = 0; st[i] != '\0' ; i ++)
      {
         if (isspace(st[i]))
              putch('\n');
         else
              putch(st[i]);
      }
}
