// Take a number and print smallest factor

#include<stdio.h>

int main()
{
 int i, n;

     printf("Enter a number:");
     scanf("%d", &n);

     for(i = n/2; i >= 2 ; i --)
     {
        if(n % i == 0)
        {
            printf("Largest Factor = %d", i);
            break;
        }
     }

}
