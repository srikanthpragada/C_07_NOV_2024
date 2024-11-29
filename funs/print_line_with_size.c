// Print a message with lines of given size

#include<stdio.h>

// user-defined function
void line(int size)
{
  int i;

      for(i = 1; i <=  size  ; i ++)
      {
         putch('*');
      }
}

void main()
{
      line(25); // call function

      printf("\nSrikanth Technologies\n");

      line(30); // call function
}

