// Create a set of functions related to numbers

#include<stdio.h>

void print_type(int num)
{
   if(num % 2 == 0)
      printf("Even ");
   else
      printf("Odd ");
}

void main()
{
      print_type(10);
      print_type(15);
}

