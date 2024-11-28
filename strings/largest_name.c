// Take 5 strings and display the largest

#include<stdio.h>
#include<string.h>


int main()
{
  char st[20], largest[20];
  int i;

      strcpy(largest, "");

      for(i = 0; i < 5; i ++)
      {
          printf("Enter a string :");
          gets(st);

          if(strcmp(st, largest) > 0)
               strcpy(largest, st);
      }

      printf("Largest = %s", largest);
}

