#include <stdio.h>

int g; // global variable

void fun()
{
  int a;  // local variable
}

void main()
{
  int b;

    printf("%d %d", b, g);
}
