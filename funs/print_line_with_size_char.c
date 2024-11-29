// Print a message with lines of given size and char

#include<stdio.h>

// user-defined function
void line(int size, char ch)
{
  int i;

      for(i = 1; i <=  size  ; i ++)
      {
         putch(ch);
      }
}

void main()
{
      line(25, '='); // call function

      printf("\nSrikanth Technologies\n");

      line(30, '*'); // call function
}

