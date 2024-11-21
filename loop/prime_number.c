// Take a number and display whether it is prime

#include<stdio.h>

int main()
{
 int i, n, count = 0;

     printf("Enter a number :");
     scanf("%d", &n);

     for(i = 2; i <= n / 2 ; i ++)
     {
          if (n % i == 0)
              count ++;
     }

     if(count == 0)
         printf("Prime Number");
     else
         printf("Not a prime number!");
}
