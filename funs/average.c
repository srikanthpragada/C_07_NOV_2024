#include<stdio.h>

// Function declaration or prototype declaration
float average(int, int);

void main()
{
   printf("%f", average(10, 15));
}

// Function Definition
float average(int a, int b)
{
   return  (a + b) / 2.0;
}
