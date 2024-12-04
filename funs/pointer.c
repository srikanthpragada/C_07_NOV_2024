#include <stdio.h>

void main()
{
  int a = 100;
  int * p; // pointer variable

   p = &a;  // assign address to pointer

   printf("%d %d", a, *p);  // use pointer

}
