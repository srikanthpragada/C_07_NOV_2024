#include <stdio.h>

void zero(int n)
{
    n = 0;
}

void main()
{
  int a = 100;

    zero(a);
    printf("%d ", a);
}
