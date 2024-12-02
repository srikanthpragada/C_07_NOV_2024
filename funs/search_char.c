#include<stdio.h>

int search_char(char s[20], char ch)
{
  int i;

      for(i = 0; s[i] != '\0'; i ++)
      {
          if (s[i] == ch)
              return i; // found at i index
      }

      return -1;  // char not found
}


void main()
{
 char st[] = "hello";

   printf("%d ", search_char(st, 'l') );
}
