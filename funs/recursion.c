// Recursion
#include <stdio.h>


void reverse(int n)
{
   printf("%d ", n);
   if (n > 1)
      reverse(n - 1);
}

void main()
{
  reverse(5);
}
