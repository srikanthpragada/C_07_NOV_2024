// Take array of 10 elements, fill with random numbers and then display
// odd numbers first and then even numbers

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

     printf("\nOdd Numbers :");
     for(i = 0; i < 10; i ++)
     {
        if(a[i] % 2 == 1)
           printf("%d ", a[i]);
     }

     printf("\nEven Numbers :");

     for(i = 0; i < 10; i ++)
     {
         if(a[i] % 2 == 0)
           printf("%d ", a[i]);
     }

}
