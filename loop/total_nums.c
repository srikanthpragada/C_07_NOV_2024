//  Take numbers until 0 is given and display sum of positive numbers

#include<stdio.h>

int main()
{
 int total = 0, n;


     while(1)
     {
        printf("Enter a number [0 to stop] :");
        scanf("%d", &n);

        if (n == 0)
            break;

        if (n < 0)
            continue;

        total += n;
     }

     printf("Total = %d", total);

}
