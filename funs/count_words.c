#include<stdio.h>

int count_words(char s[20])
{
  int i, count = 0;

      for(i = 0; s[i] != '\0'; i ++)
      {
          if ( s[i] == ' ')
               count ++;
      }

      return  count + 1;
}


void main()
{
 char st[] = "how are you doing";

   printf("%d", count_words(st) );
}
