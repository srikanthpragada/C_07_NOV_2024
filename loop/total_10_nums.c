// Take 5 numbers and print total

#include<stdio.h>

int main()
{
 int i, n, total = 0;


     for(i = 1; i <= 5 ; i ++)
     {
        printf("Enter a number :");
        scanf("%d", &n);

        total += n;
     }

     printf("Total = %d", total);


}
