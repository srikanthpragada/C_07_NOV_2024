// Take 5 strings and concatenate them

#include<stdio.h>
#include<string.h>


int main()
{
  char st[20], result[100];
  int i;

      strcpy(result, "");

      for(i = 0; i < 5; i ++)
      {
          printf("Enter a string :");
          gets(st);

          strcat(result, st);
      }

      printf("Result =  %s", result);
}

