// Take 10 numbers and print total

#include<stdio.h>

int main()
{
 int i, n, total = 0;


     for(i = 1; i <= 10 ; i ++)
     {
        printf("Enter a number [0 to stop]:");
        scanf("%d", &n);

        if(n == 0)
            break;

        total += n;
     }

     printf("Total = %d", total);


}
