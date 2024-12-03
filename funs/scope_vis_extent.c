#include <stdio.h>

int g; // global variable

void fun()
{
  int a, g;  // local variable

  printf("%d ", g);
}

void main()
{
  int b;

    printf("%d %d", b, g);
}
