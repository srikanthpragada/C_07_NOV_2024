// Take array of 5 elements, fill with input from user and print it

#include<stdio.h>

int main()
{
 int a[5];
 int i;


     for(i = 0; i < 5; i ++)
     {
         printf("Enter number :");
         scanf("%d", &a[i]);
     }

     printf("Squares = ");

     for(i = 0; i < 5; i ++)
     {
         printf("%d ", a[i] * a[i]);
     }

}
