// Take a string and print only uppercase letters

#include<stdio.h>

int main()
{
  char st[20], st2[20];
  int i;

      printf("Enter string :");
      gets(st);


      for(i = 0; st[i] != '\0' ; i ++)
      {
         if(isupper(st[i]))
             putch(st[i]);
      }
}
