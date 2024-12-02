#include<stdio.h>

int first_upper(char s[20])
{
  int i;

      for(i = 0; s[i] != '\0'; i ++)
      {
          if ( isupper(s[i]))
              return s[i];  // found upper and return it
      }

      return  '\0'; // null char on failure
}


void main()
{
 char st[] = "abcxyz";

   printf("%c ", first_upper(st) );
}
