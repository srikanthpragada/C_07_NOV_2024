// Take 10 numbers and print total

#include<stdio.h>

int main()
{
 int i, n;

     printf("Enter a number:");
     scanf("%d", &n);

     for(i = 2; i <= n/2 ; i ++)
     {
        if(n % i == 0)
        {
            printf("Smallest Factor = %d", i);
            break;
        }
     }

}
