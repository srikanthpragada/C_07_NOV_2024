// Take array of 10 elements, fill with random numbers

#include<stdio.h>

int main()
{
 int a[10];
 int i;

     srand(time(0));  // initialize seed

     for(i = 0; i < 10; i ++)
     {
         a[i] = rand() % 100;
         printf("%d ", a[i]);
     }

}
