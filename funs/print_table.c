// Print a table

#include<stdio.h>

// user-defined function
void print_table(int num)
{
  int i;

      for(i = 1; i <=  10; i ++)
      {
         printf("%3d * %2d = %6d\n", num, i, num * i);
      }
}

void main()
{
      print_table(9);
      print_table(11);
}

