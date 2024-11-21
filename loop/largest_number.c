//  Take numbers until 0 is given and display largest number

#include<stdio.h>

int main()
{
 int largest = 0, n;


     while(1)
     {
        printf("Enter a number [0 to stop] :");
        scanf("%d", &n);

        if (n == 0)
            break;

        if(n > largest)
            largest = n;
     }

     printf("Largest = %d", largest);
}
