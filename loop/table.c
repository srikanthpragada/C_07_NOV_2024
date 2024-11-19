// Print table for the given number

#include<stdio.h>

int main()
{
 int n, i;

     printf("Enter  a number :");
     scanf("%d", &n);


     for(i = 1; i <= 10 ; i ++)
     {
         printf("%3d * %2d = %4d\n", n, i, n * i);
     }


}
