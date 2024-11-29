// Take 5 strings and count how many uppercase letters are there

#include<stdio.h>
#include<string.h>


int main()
{
  char st[20];
  int i, j, count = 0;


      for(i = 0; i < 5; i ++)
      {
          printf("Enter a string :");
          gets(st);

          for(j = 0; st[j] != '\0' ; j ++)
          {
              if (isupper(st[j]))
                  count ++;
          }
      }

      printf("Count = %d", count);
}

