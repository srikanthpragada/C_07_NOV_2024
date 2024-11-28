#include<stdio.h>
#include<string.h>


int main()
{
  int i;
  char st[20];

  printf("Enter a string: ");
  gets(st);

  for(i=strlen(st)-1;i >= 0; i --)
      putch(st[i]);

}
