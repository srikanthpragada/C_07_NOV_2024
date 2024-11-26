// Take array of 5 X 5 elements, fill with random numbers

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int a[5][5];
 int i, j;

     srand(time(0));  // initialize seed

     for(i = 0; i < 5; i ++)
     {
         for(j = 0; j < 5; j ++)
         {
             a[i][j] = rand() % 100;
             printf("%5d", a[i][j]);
         }

         printf("\n");
     }

}
