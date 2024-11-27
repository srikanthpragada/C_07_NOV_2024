// Take 5 names and print them in reverse

#include<stdio.h>

int main()
{
  char names[5][20];  // 5 strings each of 20 chars
  int i;

      for(i = 0; i < 5 ; i ++)
      {
         printf("Enter Name :");
         gets(names[i]);
      }


      for(i = 4; i >= 0 ; i --)
      {
         puts(names[i]);
      }
}
