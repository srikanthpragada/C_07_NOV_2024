// Take a string and print each char and its code

#include<stdio.h>

int main()
{
  char st[50];
  int i;

      printf("Enter a string :");
      gets(st);

      for(i = 0; st[i] != '\0' ; i ++)
      {
         printf("%c  %d\n", st[i], st[i]);
      }
}
