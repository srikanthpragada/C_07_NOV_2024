// Take a number and display whether it is prime

#include<stdio.h>

int main()
{
 int i, n, prime = 1; // flag

     printf("Enter a number :");
     scanf("%d", &n);

     for(i = 2; i <= n / 2 ; i ++)
     {
          if (n % i == 0)
          {
              prime = 0;
              break;
          }
     }

     if(prime)
         printf("Prime Number");
     else
         printf("Not a prime number!");
}
